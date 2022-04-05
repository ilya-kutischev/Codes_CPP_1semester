#include<iostream>
#include <iomanip>
#include<fstream>			// подключение библиотеки <fstream>
using namespace std;
const int n = 100;
void shell_sort(int* array, int size);
void put_int_in_arr(int* array, int& size, int x);
int main() {
	int st[n];
	ifstream fin("sort.txt", ios::in);
	if (!fin) { cout << "Error" << endl; exit(1); }
	int i = 0;
	while (!fin.eof()) {			 // чтение файла "struct.txt", пока не конец
		fin >> st[i];
		if (fin.eof())break;
		i++;
	}
	fin.close();
	shell_sort(st, i + 1);
	for (int j = 0; j < i; j++) cout << st[j] << ' ';
	cout << "\nskolko chisel vstavitt?" << endl;
	int num;
	cin >> num;
	int amount = i;
	cout << "vvedi chisla dla vstavki:" << endl;
	for (int i = 0; i < num; i++) {
		int a;
		cin >> a;
		put_int_in_arr(st, amount, a);
	}
	for (int j = 0; j < amount; j++) cout << st[j] << ' ';
	ofstream fout("sort_out.txt", ios::out);
	if (!fout) { cout << "No file open\n"; exit(1); }
	for (int k = 0; k < amount; k++) {

		fout << st[k] << " ";
	}

}
void shell_sort(int* array, int size) {
	for (int s = size / 2; s > 0; s /= 2) {
		for (int i = 0; i < size; i++) {
			for (int j = i + s; j < size; j += s) {
				if (array[i] > array[j]) {
					int temp = array[j];
					array[j] = array[i];
					array[i] = temp;
				}
			}
		}
	}
}

void put_int_in_arr(int* array, int& size, int x) {
	int temp, fl;
	fl = 0;
	if (x <= array[0]) { fl = 1; }
	if (x >= array[size - 1]) { size++; array[size - 1] = x; return; }
	for (int j = 1; j < size + 1; j++) {
		if ((x <= array[j] && x >= array[j - 1]) || fl) {

			for (int i = size + 1; i >= j; i--) {
				array[i] = array[i - 1];
			}
			if (fl)j--;
			array[j] = x;
			size++;
			return;
		}
	}

}
