// Пример 1. Частично динамическая матрица.  Количество строк - const.
// Используем массив указателей.
// Для каждой строки  выделяется динамическая память.
// Можно для каждой строки вводить разное количество элементов.
#include<iostream>
#include <ctime>
using namespace std;

const int DIM = 20;
int main(){
    int  n, sum;
    system("cls");
    cout << " Enter n -- number strok: ";  cin >> n ;
    int* ptr[DIM];      // массив указателей на строки
    int m[DIM];         // массив для хранения количества элементов каждой строки 
    srand(time(NULL));
// Выделение динамической памяти под строки матрицы
    for ( int i = 0; i < n; i++) {
      cout << " Enter m[i] -- number elements in stroke: ";
      cin >> m[i];
         ptr[i] = new int[m[i]];          	  // выделение памяти под i-ую строку матрицы 
        for (int j = 0; j < m[i]; j++)            // заполнение i-ой строки матрицы
            ptr[i][j] = rand() % 25 - 9;
    }

    cout << "Matrix source:  " << endl;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m[i]; j++) {
            cout.width(5);
            cout << *(ptr[i] + j);                	 
        }
        cout << endl;
    }

// Нахождение суммы элементовв в каждой строке
    for (int i = 0; i < n; i++) {
        sum = 0; 
        for (int j = 0; j < m[i]; j++)
            sum = sum + ptr[i][j];
        cout << "sum = " << sum << endl;
    }
    
// Освобождение динамической памяти,занимаемой строками матрицы
    for (int i = 0; i < n; i++)
        delete [] ptr[i];                     // освоб.памяти, занимаемой i-ой строкой матрицы X
}

