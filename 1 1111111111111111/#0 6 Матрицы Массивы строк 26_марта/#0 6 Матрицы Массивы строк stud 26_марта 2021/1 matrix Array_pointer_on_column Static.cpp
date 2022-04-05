// Пример 1. В данной целочисленной матрице matr[n][m] переставить
// местами 1 и 2 столбцы, используя массив указателей на столбцы.
#include <iostream>
using namespace std;

int main() {
    const int D1 = 5, D2 = 5;
    int matr[D1][D2], n, m;
    int* ptr[D2]; 			// массив указателей ptr
    cout << "Vvedi n, m: ";  cin >> n >> m;
    srand(n + m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matr[i][j] = rand() % 25 - 10;

    cout << endl << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << matr[i][j]<<' '<< & matr[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < m; j++)
        ptr[j] = &matr[0][j];			// инициализация массива указателей

    cout<< "Array pointer:" << endl;
    for (int j = 0; j < m; j++)
        cout << ptr[j] << ' ' << *ptr[j] << ' ';

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << *(ptr[j] + i*D2);		// вывод массива, используя указатель		
        }
        cout << endl;
    }

    int* p = ptr[0];				// перестановка 0 и 1 столбцов
    ptr[0] = ptr[1];
    ptr[1] = p;

    cout << "Array pointer after exchange:" << endl;
    for (int j = 0; j < m; j++)
        cout << ptr[j] << ' ' << *ptr[j] << ' ';
    cout<<endl;

    cout << " Matrix after exchange" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << *(ptr[j] + i*D2);		// вывод массива, используя указатель		
        }
        cout << endl;
    }
    
 }

