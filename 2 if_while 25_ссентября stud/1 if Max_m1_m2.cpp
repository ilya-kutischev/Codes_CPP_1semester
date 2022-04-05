
// Пример 1. Даны три различных числа x, y, z. 
// Найти максимальное и два других.
#include <iostream>
using namespace std;
int main() {
	int x, y, z, max, m1, m2;
	cout << "Vvedi x, y, z: ";	cin >> x >> y >> z;
	max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	if (max == x) { m1 = y; m2 = z; }
	else
		if (max == y) { m1 = x; m2 = z; }
		else { m1 = x; m2 = y; }
	cout << "max = " << max << " m1 = " << m1 << " m2 = " << m2 << endl;
}