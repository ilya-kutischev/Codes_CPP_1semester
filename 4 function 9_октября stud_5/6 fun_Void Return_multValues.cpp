// Пример 6. Возврат из функции нескольких значений.
// Использование функции change() для обмена значений переменных.
#include <iostream>
using namespace std;
void change(int&, int&);				// прототип функции
int main() {
	int a = 10, b = 5;
	cout << "a = " << a << ", b = " << b << endl;	 // a = 10, b = 5
	change(a, b);
	cout << "a = " << a << ", b = " << b << endl;	 // a = 5, b = 10
}
void change(int& x, int& y) {				// определение функции
	int temp = x;
	x = y;	
	y = temp;
}
