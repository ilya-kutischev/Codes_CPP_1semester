// Д.З. Выполнил Никита Владислав
// 2. * В массиве [n][m] удалить первую нулевую строку т.е. все элементы
// строки равны нулю, подтянув все остальные строки.При этом дополнительный
// массив не использовать. Оставшиеся строки массива после удаления нулевой
// строки расположить в порядке убывания количества минимальных элементов в
// строке.Указатели на строки. (Поиск количества минимальных элементов в строке
// выполнять за один просмотр строки).
// Память выделена в функции.
#include <iostream>
using namespace std;

int num_minim(int*, int);
void delete_null_str(int**, int&, int);
void sort_matrix(int**, int, int);
int** memory(int, int);
void init(int**, int, int);
void print(int**, int, int);
void delMemory(int**, int);
int main , m;
	int** ptr = 0;
	bool flag = 1;
	int case_;

	while (flag) {
		cout << "Enter number label:\n";
		cout << "1 -- memory\n"
			<< "2 -- init\n"
			<< "3 -- print\n"
			<< "4 -- sort_matrix\n"
			<< "5 -- delete_null_str\n"
			<< "6 -- delMemory\n"
			<< "7 -- exit\n";
		cin >> case_;
		switch (case_) {
		case 1: cout << "Enter n: \n ";  cin >> n;
			cout << "Enter m: \n ";  cin >> m;
			ptr = memory(n, m); break;
		case 2: cout << "Enter elements of matrix:\n"; init(ptr, n, m); break;
		case 3: print(ptr, n, m); break;
		case 4: sort_matrix(ptr, n, m); break;
		case 5: delete_null_str(ptr, n, m); break;
		case 6: delMemory(ptr, n); break;
		case 7: flag = 0;
		}
	}
}
int** memory(int n, int m) {			// выделение памяти
	int** p = new int* [n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];
	return p;
}
void init(int** p, int n, int m) {	// инициализация двумерного массива случайным 
// образом
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> p[i][j];
}

....