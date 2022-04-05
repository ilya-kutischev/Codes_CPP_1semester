// Пример 5. Передача аргумента функции по значению.
#include <iostream>
using namespace std;
void fun(int x);
int main() {
	int y = 5;
	fun(y);
	cout << y << endl;		// 5
}
void fun(int x) {
	x++;
        cout << x << endl;		// 6
}
