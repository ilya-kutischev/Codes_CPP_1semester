// Пример 5. В динамической матрице из n строк и m столбцов 
// Переставить местами 0-ую и 1-ую строки матрицы. Использовать функцию.
#include<iostream>
using namespace std;

void obmen(int**, int, int);
int main() {
    int n, m;
    cout << "Enter n, m:"; cin >> n >> m;
    srand(n + m);
    int** ptr = new int* [n];  			// создание динамической матрицы
    for (int i = 0; i < n; i++) {
        ptr[i] = new int[m];
        for (int j = 0; j < m; j++)
            *(ptr[i] + j) = rand() % 25 - 9;;
    }
    cout << " &ptr[0]: " << &ptr[0] << " ptr: " << ptr << endl;
    cout << "main:  Adresa strok matrix:" << endl;
    for (int i = 0; i < n; i++)
        cout << " ptr[" << i << "]: " << ptr[i] << endl;

    cout << "\tMatrix source: \n";
    for (int i = 0; i < n; i++) {			// вывод исходной матрицы
        for (int j = 0; j < m; j++) {
            cout.width(5);	cout << ptr[i][j];
        }
        cout << endl;
    }
    
 /*    int* temp = ptr[0];	ptr[0] = ptr[1];  ptr[1] = temp; 	// перестановка строк*/
    obmen(ptr, n, m);
    cout << "main: tMatrix after exchange:\n";
    for (int i = 0; i < n; i++) {		// вывод  матрицы после перестановки строк
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << ptr[i][j];
        }
        cout << endl;
    }
     for (int i = 0; i < n; i++)
        delete[] ptr[i];			// удаление строк
    delete[] ptr;				// удаление массива указателей
}
void obmen(int** p, int n, int m) {		// вызов функции obmen()
// значение p -- адрес массива указателя на строки
    cout << " obmen: " << endl;
    cout << " &p[0]: " << &p[0] << " p: " << p << endl;
    cout << " Adresa strok:" << endl;
    for (int i = 0; i < n; i++)
        cout << " p[" << i << "]: " << p[i] << endl;
    
    int* r = p[0];				// перестановка 0 и 1 строк
    p[0] = p[1];
    p[1] = r;
}


