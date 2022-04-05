// Пример 1. Аргументы по умолчанию.
#include <iostream>
using namespace std;
void mult(int n, int m = 3);
int main() {
	mult(4, 5);		// n * m = 20
	mult(4);		// n * m = 12
}
void mult(int n, int m) {
	int rez = n * m;
	cout << "n * m = " << rez << endl;
}