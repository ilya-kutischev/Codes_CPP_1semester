//создается массив из n чисел. За один проход найти два минимальных числа и вывести.
#include <iostream>

using namespace std;

const int DIM = 50;

int main() {

    int a[DIM], n;

    while (true) {                                                  // проверка корректности ввода

        system("cls");                                       // очистить экран

        cout << "Enter n:";         cin >> n;     // 5

        if (n > 1 && n < DIM) break;

        cout << "Nocorrect n\n";

    }

    srand(n);                                                         // для получения разных чисел

    cout << "\n\t 1___Massiv a(n)\n";

    for (int i = 0; i < n; i++)

        a[i] = rand() % 50 + 1;                          // числа от 1 до 50

    for (int i = 0; i < n; i++)

        cout << a[i] << ' ';
    int min = a[1], min1 = a[1], nmin = 1, nmin1 = 1, s;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min) min = a[i];   //самое минимальное число станет на место min1,  а второе на место min
        if (min < min1) {
            s = min1;  min1 = min; min = s;  //замена
        }
    }
    cout << "Minimalnie chisla= " << min << " i " << min1;
}