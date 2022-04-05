// Пример 4. Глобальные и локальные переменные.
#include <iostream>
using namespace std;
int a = 55;		// глобальная переменная a
int main() {
	int a = 7; 	// локальная переменная a
	cout << " a = " << a << endl;		// a = 7
	cout << " a = " << ::a << endl;		// a = 55
}
