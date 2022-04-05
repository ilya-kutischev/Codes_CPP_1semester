// Пример 2. Написать функцию для вычисления площади квадрата
// или прямоугольника, используя аргументы по умолчанию.
#include <iostream>
using namespace std;
float area(float l, float w = 0) {
	if (!w) w = l;
	return l * w;
}
int main() {
	float x, y, skv, spr;
	cout << "vvedi storonu kvadrata: ";	cin >> x;
	skv = area(x);
	cout << "area kvadrata = " << skv << endl;
	cout << "vvedi storoni pryamougolnika: ";
	cin >> x >> y;		spr = area(x, y);
	cout << "area pryamougolnika= " << spr << endl;
}
