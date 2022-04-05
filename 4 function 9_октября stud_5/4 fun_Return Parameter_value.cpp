// Пример 6. Передача аргумента функции по значению.
#include <iostream>
using namespace std;
int fun(int x);
int main() {
	int y = 5;
	int z = fun(y);
	cout <<z<<' '<< y << endl;		// 6 5
}
int fun(int x) {
	x++;
	cout << x << endl;			// 6
	return x;
}
