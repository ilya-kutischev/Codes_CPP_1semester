// Пример 2. Вводятся три числа x, y, z. Найти среди них число
// с максимальным значением.
#include <iostream>
using namespace std;
int main() {
	int x, y, z, max;
	cout << "Vvedi x, y, z: ";	cin >> x >> y >> z;
	cout << "Variant 1" << endl;
	max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	cout << "max = " << max << endl;
	cout << "Variant 2" << endl;
	if (x > y&& x > z) max = x;
	else if (y > z) max = y;
	     else max = z;
	cout << "max = " << max << endl;
}
