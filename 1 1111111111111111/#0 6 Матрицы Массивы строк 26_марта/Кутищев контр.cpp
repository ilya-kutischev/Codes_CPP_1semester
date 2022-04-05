/*в массиве m*n удалить строки содержащие хотя бы один
элемент, значение которого простое число. Оставшиеся строки расположить
по возрастанию элементов первого столбца.
*/

#include<iostream>
using namespace std;
int** memory(int, int);
void init(int**, int, int);
void print(int**, int, int);
void delMemory(int**, int);
void enter(int** p, int n, int m);                        //ввод массива вручную
int IsInStringPrime(int* str, int* m);                     //проверка есть ли в строке простое число
void delStringWithPrime(int** mas, int* n, int* m);         //удаление строки с простым числом
void sortByFirstNum(int** mas, int* n, int* m);       //сортировка по возрастанию элементов первого столбца
int IsPrime(int x);

int main() {
    int n = 0, m = 0;
    int prWhile = 1, vibor;
    int** ptr = 0;
    while (prWhile) {
        cout << "Enter number label:\n";
        cout << "memory-------->1\n"
            << "init---------->2\n"
            << "enter arr----->3\n"
            << "print--------->4\n"
            << "del str------->5\n"
            << "sort---------->6\n"
            << "delMemory----->7\n"
            << "end programm-->8\n";

        cin >> vibor;
        switch (vibor) {
        case 1: cout << "Enter n: \n ";  cin >> n;
            cout << "Enter m: \n ";  cin >> m;
            ptr = memory(n, m);
            break;
        case 2: init(ptr, n, m);	  break;
        case 4: print(ptr, n, m);  break;
        case 7: delMemory(ptr, n); break;
        case 8: prWhile = 0; break;
        case 5: delStringWithPrime(ptr, &n, &m); break;
        case 6: sortByFirstNum(ptr, &n, &m); break;
        case 3: enter(ptr, n, m);	  break;
        }
    }
    cout << "END PROGRAMM" << endl;
}
int** memory(int n, int m) {			// функция выделения памяти
    int** p = new int* [n];
    for (int i = 0; i < n; i++)
        p[i] = new int[m];
    return p;
}
void init(int** p, int n, int m) {		// функция init()
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            p[i][j] = rand() % 25 - 10;
}

void enter(int** p, int n, int m) {		// функция enter()
    cout << "\n enter array:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> p[i][j];
}

void print(int** p, int n, int m) {		// функция print() 
    cout << "\n your array: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);  cout << p[i][j];
        }
        cout << endl;
    }
}
void delMemory(int** p, int n) {			// функция delMemory() 
    for (int i = 0; i < n; i++)
        delete[] p[i];
    delete[] p;
}

int IsInStringPrime(int* str, int* m) {    //проверка строки на простое число
    int fl = 0;
    for (int i = 0; i < *m; i++) {
        if (IsPrime(str[i])) { fl = 1; break; }
    }
    return fl;
}

void delStringWithPrime(int** mas, int* n, int* m) {  //удаление строки с простым числом
    for (int i = 0; i < *n; i++) {
        if (IsInStringPrime(mas[i], m)) {
            (*n)--;
            delete[] mas[i];

            for (int j = i; j < *n; j++) {
                mas[j] = mas[j + 1];
            }
            i--;
        }

    }


}
void sortByFirstNum(int** mas, int* n, int* m) { //сортировка по 1 элементу в строке
    int flag = 1; int* x;    int i = 1;
    while (flag) {
        flag = 0;
        for (int j = 0; j < *n - i; j++)
            if (mas[j][0] < mas[j + 1][0])
            {
                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;
                flag = 1;
            }
        i++;
    }
}

int IsPrime(int x) {
    int y, d = 2, fl = 1;
    y = x / 2;
    while (y >= d)
    {
        if (x % d == 0) { fl = 0; d++; }       //если найдется хоть один делитель, fl меняется на 0, начит число сложное.
        else d++;
    }
    return fl;
}