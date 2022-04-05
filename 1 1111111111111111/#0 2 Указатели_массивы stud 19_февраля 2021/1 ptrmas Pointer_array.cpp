// Пример 1. Указатели и массивы.
#include<iostream>
using namespace std;

void main() {
    int mas[] = { 5,2,3,4 };			// имя массива -- константный указатель
    int* ptr = mas;				// указателю присваивается адрес массива
// Вывод адреса массива
    cout << &mas[0] << ' ' << mas << ' ' << &mas << endl;
    cout << &ptr[0] << ' ' << ptr << endl;

// Определение размера массива и указателя
    cout << sizeof(mas) << endl;		// 16  размер массива
    cout << sizeof(ptr) << endl;		// 4   размер указателя

// Доступ к элементам массива
// Вывод адресов и значений элементов массива 
    int n = sizeof(mas)/sizeof(mas[0]);	
    cout<<"n =  " << n << endl;			// n = 4		
    for (int i = 0; i < n; i++)
        cout << (mas + i) << ' ' << *(mas + i) << ' ' << mas[i] << endl;  // прямая адресация
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << (ptr + i) << ' ' << *(ptr + i) << ' ' << ptr[i] << endl;  // косвенная адресация
    cout << endl;

    cout << "*ptr = " << *ptr << endl;		// 5
    cout << "*mas =  " << *mas << endl;		// 5  имя массива можно разыменовать


// Вычитание адресов
    int k = &mas[3] - &mas[0];
    cout << "k =  " << k << endl;		// k = 3
    k = &mas[3] - mas;
    cout << "k =  " << k << endl;		// k = 3
    cout << endl;

    // Операции ++ и --
    cout << *ptr++ << endl;			// 5
    cout << *ptr << endl;			// 2
    cout << (*ptr)++ << endl;			// 2
    cout << *ptr << endl;			// 3


//    mas = ptr; 				// Нельзя!!!
//    mas++;					// Нельзя!!!
//    *mas++;					// Нельзя!!!
}
