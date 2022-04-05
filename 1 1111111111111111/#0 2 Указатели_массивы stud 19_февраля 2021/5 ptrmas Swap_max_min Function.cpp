//Пример 5. Дан одномерный целочисленный массив. Поменять 
// местами минимальный и максимальный элементы массива.
// Использовать функции для ввода, вывода, обработки массива.
#include <iostream>
using namespace std;

void init(int*, int);
void display(int*, int);
void obmen(int*, int);
const int DIM = 20;
int main() {
    int mas[DIM], n;
    cout << "Enter n: ";	cin >> n;
    init(mas, n);					// вызов init()
    cout << " Source array\n";  display(mas, n);	// вызов display()
    obmen(mas, n);					// вызов obmen()
    cout << "Rezult array\n";   display(mas, n);	// вызов display()
}

void init(int* p, int n) {
    srand(n);
    for (int* q = p; q < p + n; q++)
        *q = rand() % 15 - rand() % 10;
}

void display(int* p, int n) {
    for (int* q = p; q < p + n; q++)
        cout << *q << ' ';
    cout << endl;
}

void obmen(int* p, int n) {
    int imin = 0, imax = 0;
    for (int i = 0; i < n; i++) {
        if (*(p + i) < *(p + imin))	imin = i;
        if (*(p + i) > * (p + imax))	imax = i;
    }
    int temp = p[imin];	p[imin] = p[imax];   p[imax] = temp;
}


