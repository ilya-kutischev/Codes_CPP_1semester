#include<iostream>
#include <iomanip>
#include<fstream>
using namespace std;
struct Stud {
	char fam[15];		// указатель нельзя, т.к. пишем структуру в файл 
	int kurs, group;
};
void sozdFileBin();		// функция создания файла
void print();			// функция вывода файла
void perestanovka();	// функция перестановки структур в файле
int main() {
	sozdFileBin();
	print();
	perestanovka();
	print();
}
void sozdFileBin() {			// создание binary-файла структур
	cout << "fun sozdFileBin: \n";
	ifstream fin("struct.txt");
	if (!fin) { cout << "Error" << endl; exit(1); }
	ofstream fout("structBin", ios::binary);
	if (!fin) { cout << "Error" << endl; exit(1); }
	Stud st;
	while (fin) {
		fin >> st.fam >> st.kurs >> st.group;
		if (!fin)break;
		fout.write((char*)&st, sizeof(Stud));

	}
	fin.close();		fout.close();
}
void perestanovka() {
	cout << "fun Perestanonka: \n";
	Stud x, y;
	ifstream fin("struct.txt");
	if (!fin) { cout << "Error" << endl; exit(1); }
	int count = 0;
	Stud st;
	while (fin) {
		fin >> st.fam >> st.kurs >> st.group;
		if (!fin)break;
		count++;
	}
	fin.close();
	int flag = 1; int i = 1;
	while (flag) {
		cout << "while\n";
		flag = 0;
		fstream fio("structBin", ios::binary | ios::in | ios::out);
		if (!fio) { cout << "Error" << endl; exit(1); }
		for (int k = 0; k < count; k++) {
			fio.seekg(k, ios::beg);
			fio.read((char*)&x, sizeof(Stud));
			fio.read((char*)&y, sizeof(Stud));
			if (x.fam > y.fam) {
				cout << x.fam << " " << y.fam << endl;
				cout << "change" << endl;
				fio.seekp(k, ios::beg);
				fio.write((char*)&y, sizeof(Stud));
				fio.write((char*)&x, sizeof(Stud));
				flag = 1;
			}

		}
		fio.close();
		i++;
	}

}
void print() {
	cout << "fun Print: \n";
	ifstream fin("structBin", ios::binary);
	if (!fin) { cout << "Error" << endl; exit(1); }
	Stud st;
	while (fin) {
		fin.read((char*)&st, sizeof(Stud));
		if (fin)
			cout << setw(10) << st.fam << setw(5) << st.kurs << setw(5) << st.group << endl;
	}
	cout << endl;	fin.close();
}
