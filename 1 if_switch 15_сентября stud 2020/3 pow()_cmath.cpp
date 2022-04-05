#include <iostream>
#include <cmath>
using namespace std;
// Пример 3. Даны два действительных числа a и b. Возвести в третью степень 
// большее из них и в четвертую степень меньшее.
// Вывести новые значения a и b.
int main() {
	double a, b;
	cout << "Enter the number a, b: ";		cin >> a >> b;
	cout << " a = " << a << "  b = " << b << endl;
	if (a > b) { a = pow(a, 3); b = pow(b, 4); }
	else { a = pow(a, 4); b = pow(b, 3); }
	cout << " a = " << a << "  b = " << b << endl;
}

