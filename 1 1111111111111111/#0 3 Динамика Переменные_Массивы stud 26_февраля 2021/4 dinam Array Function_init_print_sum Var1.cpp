// Пример 4. Найти сумму элементов одномерного динамического
// массива. Массив создаётся в main(). Для вычисления
// суммы, ввода, вывода элементов массива используются функции.
// Вариант 1.
#include <iostream>
using namespace std;

void init(int*, int);			// функция создания массива
void print(int*, int); 			// функция вывода массива
int sum(int*, int); 			// функция выч. суммы элементов
int main() {
	int n;
	cout << "Enter n -- number elements in array: ";
	cin >> n;				// 5
	int* ptr = new int[n];			// выделение памяти для массива
	init(ptr, n);				// 6 -9 0 -7 7
	cout << "\n Massiv: " << endl;
	print(ptr, n);
	int y = sum(ptr, n);
	cout << "\n Summa = " << y << endl;	// Summa = -3
	delete[] ptr;
}
void init(int* p, int n) {			// определение функции init()
	srand(n);
	for(int i = 0; i < n; i++)
	   p[i] = rand() % 15 - rand() % 10;
}
void print(int* p, int n) {			// определение функции print()
	for(int i = 0; i < n; i++)
	   cout << p[i] << ' ';			// или	 cout<<*(p+i)<<' ';
	cout << endl;
}
int sum(int* p, int n) { 			// определение функции sum()
	int summa = 0;
	for(int i = 0; i < n; i++)
	   summa = summa + p[i];
	return summa;
}
