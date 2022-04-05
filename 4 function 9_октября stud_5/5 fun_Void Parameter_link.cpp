// Пример 5. Параметр функции – ссылка.
#include <iostream>
using namespace std;
void fun(int& x);
int main() {
	int y = 5;
	fun(y);
	cout << y << endl;		// 6
}
void fun(int& x) {
	x++;
	cout << x << endl;		// 6
}
