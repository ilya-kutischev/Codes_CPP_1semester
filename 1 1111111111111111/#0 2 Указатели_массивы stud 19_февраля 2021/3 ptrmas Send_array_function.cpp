// Пример 3. Передача массива функции, параметр функции -- указатель.
// Функция sum() вычисляет сумму элементов.
// Функция change() изменяет исходный массив.
#include <iostream>
using namespace std;

int sum(int*, int);
void change(int*, int);
const int DIM = 40;
int main() {
    setlocale(LC_ALL, "");
    int mas[DIM], n;
    cout << "Введи n: ";	cin >> n;		// 8
    srand(n);
    for (int i = 0; i < n; i++)
        mas[i] = rand() % 10 - rand() % 5;		// 4 -2 2 5 1 -3 -1 3

    cout << "\nmain: Исходный массив\n";
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << endl;

    cout << "main: adres mas  " << mas << endl;
    
    int summa = sum(mas, n);						// 9	
    cout << "сумма всех элементов = " << summa << endl;
    summa = sum(mas, 3);
     cout << "сумма 3-x первых элементов  = " << summa << endl;	// 4
    summa = sum(mas + 3, 3);
    cout << "сумма 3-x элементов с 3-го элемента = " << summa << endl;	//3
// Изменение массива в функции
    change(mas, n);
    cout << "\nmain: Изменённый массив\n";	
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';				// 9 3 7 10 6 2 4 8
    cout << endl;

}

int sum(int * p, int kol) {
    cout << "\nsum: p = " << p << endl;
    int sum = 0;
    for (int i = 0; i < kol; i++)
        sum = sum + p[i];

    return sum;
}

void change(int * p, int n) {
    cout << "\nchange: massiv " << endl;
    for (int i = 0; i < n; i++)
        cout << p[i] << ' ';
    cout << endl;

    for (int i = 0; i < n; i++)
        p[i] = p[i] + 5;
}
