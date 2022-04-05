// Пример 4. Функция возвращает указатель.
// Значением указателя может быть адрес переменной, адрес массива.
#include<iostream>
using namespace std;

int* fun(int*, int*);
const int n = 4;
int main(){
    int a = 2, b = 7;
    int* ptr;
    ptr = fun(&a, &b);
    cout << *ptr << endl;		// 7

    int masx[] = { 1,2,3,4 };
    int masy[] = { 5,6,7,8 };
    ptr = fun(masx, masy);
    for (int i = 0; i < n; i++)
        cout << ptr[i] << ' ';		// 5 6 7 8
    cout << endl;
}

int* fun(int* x, int* y) {
    if (*x > * y)return x;  else return y;
}
