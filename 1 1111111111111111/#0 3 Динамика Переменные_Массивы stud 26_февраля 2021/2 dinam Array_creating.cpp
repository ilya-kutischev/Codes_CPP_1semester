// Пример 2. Создание динамического одномерного массива.
// Размер массива вводится.
// ptr[i]	*(ptr + i)   --  значение i-го элемента массива
// (ptr + i)	&ptr[i]	     --  адрес i-го элемента массива.
// int * ptr = new int[4](); --	 значения всех элементов – 0.		
// int * ptr = new int[4]{ 1, 2, 3, 4 }; -- значения элементов – 1, 2, 3, 4
// int * ptr = new int[]{ 1, 2, 3, 4 };  Ошибка!!!
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n -- number elements in array: ";
	cin >> n;
	int* ptr = new int[n];				// запрос блока динамической памяти 
	for (int i = 0; i < n; i++)			// вывод массива
		ptr[i] = i + 1;
	cout << "ptr = " << ptr << endl;		// значение указателя
	cout << "ptr = " << ptr << endl;		// адрес 0-го элемента
	cout << "ptr+1 = " << ptr + 1 << endl;		// адрес 1-го элемента
	cout << "ptr+2 = " << &ptr[2] << endl;		// адрес 2-го элемента
	for (int i = 0; i < n; i++)			// вывод массива
		cout << ptr[i] << ' ';
	cout << endl;
	for (int* q = ptr; q != ptr + n; q++)		// вывод массива
		cout << *q << " ";
	cout << endl;
	delete[] ptr;
}

