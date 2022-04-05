// Пример 6. В динамической матрице из n строк и m столбцов найти  
// сумму элементов в каждой строке, используя функцию нахождения 
// суммы в одномернрм массиве. Получить массив найденных сумм.
#include<iostream>
using namespace std;

int sum(int*, int);
int main() {
    int n, m;
    cout << "Enter n, m:"; cin >> n >> m;
    int* summa = new int[n]; 			// динамический массив сумм
    srand(n + m);
    int** ptr = new int* [n];  			// создание динамической матрицы
    for (int i = 0; i < n; i++) {
        ptr[i] = new int[m];
        for (int j = 0; j < m; j++)
            *(ptr[i] + j) = rand() % 25 - 9;;
    }
    cout << "\tMatrix source: \n";
    for (int i = 0; i < n; i++) {			
        for (int j = 0; j < m; j++) {
            cout.width(5);	cout << ptr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        summa[i] = sum(ptr[i], m);		// вычисление суммы  строки 
    }
    cout << "Summa elements of strok: " << endl;	
    for (int i = 0; i < n; i++)
        cout << '\t' << summa[i] << endl;
    
    delete[] summa;				// удаление массива сумм
    for (int i = 0; i < n; i++)
        delete [] ptr[i];			// удаление строк
    delete [] ptr;				// удаление массива указателей
}
int sum(int* p, int m) {			// функция sum()
    int s = 0;
    for (int i = 0; i < m; i++)
        s = s + p[i];
    return s;
}


  
