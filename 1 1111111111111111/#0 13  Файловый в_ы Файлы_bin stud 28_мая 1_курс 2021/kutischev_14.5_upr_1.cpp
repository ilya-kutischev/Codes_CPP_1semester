#include<iostream>
#include <iomanip>
#include<fstream>
#include <cstring>
using namespace std;
int main() {
	cout << "input max length:" << endl;
	int num;
	cin >> num;
	cin.ignore();
	cout << "input str:" << endl;
	char* st = new char[num + 1];
	gets_s(st, num + 1);

	cout << st << endl;


	ofstream fout("data1.txt", ios::out);
	if (!fout) { cout << "No file open\n"; exit(1); }
	fout << st;
	fout.close();

	char temp, prew = ' ';
	int i = 0;
	bool fl = true;

	while (fl) {
		ifstream fin("data1.txt", ios::in | ios::binary);
		if (!fin) { cout << "Error" << endl; exit(1); }
		fin.seekg(i, ios::beg);
		if (!fin) { break; }
		if (i > 0)prew = temp;
		temp = fin.get();
		i++;
		fin.seekg(i, ios::beg);
		if (!fin.good()) { fl = false; }
		fin.close();
		ofstream fout("data2.txt", ios::app);  // добавляем в конец файла по букве
		if ((prew == ' ' && temp == ' ') || temp == -1)continue;
		cout << temp;
		fout.put(temp);
		fout.close();
	}

}

/*как я замучался искать ошибку в этой задаче, что я не делал а в
конец строки по непонятным мне причинам постоянно вставлялась русская буква "я".
как оказалось не у одного меня такая проблема, а дело в том, что буква я имеет
код 0xFF или -1 в десятичной системе, которым зачастую обозначается конец файла
и при считывании data1 в конец файла data2 постоянно копировался символ 'я'*/