// Пример 2. Операции с указателями.
// Указатели поддерживают ряд операций: присваивание,
// получение адреса указателя, // получение значения по указателю, 
// некоторые арифметические операции и операции сравнения.
#include <iostream>
using namespace std;

int main() {
	// Адрес указателя
	int* ptr, x = 5;
	ptr = &x;
	cout << x << ' ' << &x << endl;			// 5  00CFF768
	cout << ptr << ' ' << &ptr << endl;		// 00CFF768 00CFF774

// Операция присваивания
	int* qtr = ptr;
	cout << ptr << ' ' << qtr << endl;	// 00CFF768 00CFF768
	cout << *ptr << ' ' << *qtr << endl;	// 5 5

// Операция разыменования
	int n, m = 7;
	ptr = &m;				// ptr присвоен адрес переменной m
	cout << m << ' ' << &m << endl;			// 7 00CFF744
	cout << ptr << ' ' << *ptr << endl;		// 00CFF744 7
	n = *ptr;	cout << n << endl;		// 7
	*ptr = -13;
	cout << n << ' ' << m << endl; 		//  7 -13

// Операции инкремента (++), декремента (--)
	int b = 3;
	ptr = &b;				// в ptr адрес переменной b
	cout << b << ' ' << &b << endl;		// 3 00CFF738
	cout << ptr << ' ' << *ptr << endl;	// 00CFF738 3
	ptr++;				// в ptr адрес увеличится на 4 байта
	cout << ptr << ' ' << *ptr << endl;	// 00CFF73C -858993460
	ptr--;				// в ptr адрес уменьшится на 4 байта
	cout << ptr << ' ' << *ptr << endl;	// 00CFF738 3

// Увеличение–уменьшение значения указателя (адреса) на n
	float d = 9, * fptr;
	int k = 3;
	fptr = &d;
	cout << d << ' ' << &d << endl;		// 9 00CFF72C
	cout << fptr << ' ' << *fptr << endl;	// 00CFF72C 9
	fptr = fptr + k;// ptr увеличится на 12 байтов (т.е. +С к 00CFF72C)
	cout << *fptr - k << "aaaaaaaaa";
	cout << fptr << ' ' << *fptr << endl;	// 00CFF738 4.2039e-45
	fptr = fptr - 1;		// в ptr адрес уменьшится на 4 байта
	cout << fptr << ' ' << *fptr << endl;	// 00CFF734 -1.07374e+08
}

