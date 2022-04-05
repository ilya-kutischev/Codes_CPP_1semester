// Пример 3. Область видимости переменных.
#include <iostream>
using namespace std;
void print(int);
int main() {
	int z = 2;
	print(z);
	// n++;		// нельзя!   n определена в функции print()
}
void print(int x) {
	int n = 5 * x;
	// z++; 		// нельзя! z определена в функции main()
	cout << "n = " << n << endl;
}
