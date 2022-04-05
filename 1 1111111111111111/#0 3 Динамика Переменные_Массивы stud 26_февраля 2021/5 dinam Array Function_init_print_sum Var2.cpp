// Пример 5. Найти сумму элементов одномерного динамического
// массива. Массив создаётся в main(). Для вычисления
// суммы, ввода, вывода элементов массива используются функции.
// Можно изменять размер массива во время выполнения программы.
// Вариант 2.
#include <iostream>
using namespace std;

void init(int*, int);		// функция создания массива
void print(int*, int); 		// функция вывода массива
int sum(int*, int); 		// функция выч. суммы элементов
int main() {
    int n;
    int flag = 1;
    int* ptr = 0;
    cout << "main:   &ptr =  " << &ptr << " ptr =  " << ptr << endl;
    while (flag) {
        cout << "Enter n -- number elements in array: ";
        cin >> n;					// 5
        ptr = new int[n];				// выделение памяти для массива
        cout << "main:   &ptr =  " << &ptr << " ptr =  " << ptr << endl;
        init(ptr, n);					// 6 -9 0 -7 7
        print(ptr, n);
        int y = sum(ptr, n);
        cout << "Summa = " << y << endl;		// Summa = -3
        delete[] ptr;
        cout << " Continue? Yes--enter 1 / No--enter 0" << endl;
        cin >> flag;
    }
}
void init(int* p, int n) {				// определение функции init()
    cout << " init:   &p =  " << &p << " p =  " << p << endl;
    srand(n);
    for (int i = 0; i < n; i++)
        p[i] = rand() % 15 - rand() % 10;
}
void print(int* p, int n) {			// определение функции print()
    cout << " vivod:   &p =  " << &p << " p =  " << p << endl;
    cout << "Massiv: " << endl;
    for (int i = 0; i < n; i++)
        cout << p[i] << ' ';			// или	 cout<<*(p+i)<<' ';
    cout << endl;
}
int sum(int* p, int n) { 			// определение функции sum()
    cout << " sum:   &p =  " << &p << " p =  " << p << endl;
    int summa = 0;
    for (int i = 0; i < n; i++)
        summa = summa + p[i];
    return summa;
}

