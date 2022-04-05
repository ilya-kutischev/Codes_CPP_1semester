// Пример 2. Расположить значения четырех переменных   a, b, c, d 
// в порядке возрастания значений их величин.
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, r;
	cout << "Enter a, b, c, d  ";		cin >> a >> b >> c >> d;
	cout << " a = " << a << "  b = " << b << "  c = " << c << "  d = " << d << endl;
	if (a > b) { r = a; a = b; b = r; }
	if (a > c) { r = a; a = c; c = r; }
	if (a > d) { r = a; a = d; d = r; }
	if (b > c) { r = b; b = c; c = r; }
	if (b > d) { r = b; b = d; d = r; }
	if (c > d) { r = c; c = d; d = r; }
	cout << " a = " << a << "  b = " << b << "  c = " << c << " d = " << d << endl;
}

