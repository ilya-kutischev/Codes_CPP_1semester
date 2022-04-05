// Пример 8. Функция возвращает указатель.
// Передача аргументов  функции fun1() по ссылке.
// Передача аргументов  функции fun2() по указателю.
#include<iostream>
using namespace std;

int* fun1(int&, int&);
int* fun2(int*, int*);
int main() {
    int a = 2, b = 1;
    int* p;
    p = fun1(a, b);			// 2
    cout << *p << endl;
    p = fun2(&a, &b);			// 2
    cout << *p << endl;
}

int* fun1(int& x, int& y) {		// fun1(): параметры функции – ссылки
    if (x > y) return &x;
    else return &y;
}

/*int* fun1(int& x, int& y){
  int t;
  if(x > y) t = x; else t = y;
  return &t;
}*/

int* fun2(int* x, int* y) {		// fun2(): параметры функции – указатели
    if (*x > *y) return x;
    else return y;
}