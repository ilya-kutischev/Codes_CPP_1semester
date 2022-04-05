// Пример 5. Операции инкремента и декремента.
#include <iostream>
using namespace std;
int main() {
	int num = 10;
	cout << "num = " << num << endl;		// 10
	cout << "num = " << ++num << endl;		// 11
	cout << "num = " << num << endl;		// 11
	cout << "num = " << num++ << endl;		// 11
	cout << "num = " << num << endl;		// 12
	int x = 1, y = 2;
	int sum = x + y++;
	cout << "sum = " << sum << endl;		// 3
	cout << "x = " << x << " y = " << y << endl;		// 1 3
	sum = x + ++y;
	cout << "sum = " << sum << endl;		// 5
	cout << "x = " << x << " y = " << y << endl;		// 1 4
	sum = x++ + y;
	cout << "sum = " << sum << endl;		// 5
	cout << "x = " << x << " y = " << y << endl;		// 2 4
}