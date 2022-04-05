// Пример 10. Указатель передаётся функции fun() по ссылке.
#include<iostream>
using namespace std;

void fun(int*&);
int main(){
    int y = 5;
    cout << "main &y:  " << &y << " y: " << y << endl;
    int* ptr = &y;
    cout << "main ptr: " << ptr << " &ptr: " << &ptr << " *ptr: " << *ptr << endl;
    fun(ptr);
    cout << "main &y:  " << &y << " y: " << y << endl;
    cout << "main ptr: " << ptr << " *ptr: " << *ptr << endl;
}

void fun(int *& p){
    cout << " fun p: " << p << " &p: " << &p << " *p: " << *p << endl;
//   p = p + 1;			// Ошибка. Ссылку нельзя изменять.
    *p = *p + 1;
     cout << " fun p: " << p << " *p: " << *p << endl;
//   int x = 10;
//   cout << " fun &x: " << &x << " x: " << x << endl;
//   p = &x;			// Ошибка.  В main() лишь бы что.
//   cout << " fun  p: " << p << " *p: " << *p << endl;
}
 