// Д.З. Выполнила Герасимова Алина.
/* В массиве  matr[n][m] удалить первую нулевую строку, подтянув все остальные
строки. При этом дополнительный массив не использовать. Оставшиеся строки
расположить в порядке убывания количества минимальных элементов в строке.
*/
// Память выделена в main().
// Структура программы--плюс!
// Меню--плюс. Всё понятно для пользователя!
// Эффективная сортировка--плюс!
// Минус--удаление строки.
// В именах функций из нескольких слов ключевое слово лучше писать с большой буквы!!!

#include <iostream>
using namespace std;

void init(int**, int, int);
void print(int**, int, int);
void delMemory(int**, int, int);
void delzeroline(int**, int*, int);
int numofmins(int*, int);
void sort(int**, int, int);
int main() {
    int m, n;
    cout << "Enter the number of lines in matrix: "; cin >> n;
    cout << "Enter the number of elements in line: "; cin >> m;
    int* p = &n;
    int** ptr = new int* [n];
    for (int i = 0; i < n; i++) {
        ptr[i] = new int[m];
    }
    int choice, flag = 1;
    while (flag) {
        cout << "\tEnter number label:\n";
        cout << "1:  init\n";
        cout << "2:  print\n";
        cout << "3:  delete zero line\n";
        cout << "4:  sort\n";
        cout << "5:  delete memory\n";
        cout << "6:  end program\n";
        cin >> choice;
        switch (choice) {
        case 1: init(ptr, n, m); break;
        case 2: print(ptr, n, m); break;
        case 3: delzeroline(ptr, p, m); break;
        case 4: sort(ptr, n, m); break;
        case 5: delMemory(ptr, n, m); break;
        case 6: cout << "End!"; flag = 0;
        }
    }
}
void init(int** p, int n, int m) {
    cout << "Enter elements of matrix: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> p[i][j];
}
....