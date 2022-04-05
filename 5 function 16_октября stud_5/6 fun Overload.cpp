// Пример 6. Перегрузка функций. В программе три функции: 
// для вычисления суммы двух целых чисел, трёх целых чисел, 
// двух вещественных чисел. У всех функций одно имя sum().
#include <iostream>
using namespace std;
int sum(int a, int b){
 return a + b;
}
int sum(int a, int b, int c){
 return a + b + c;
}
float sum(float a, float b){
 return a + b;
}
int main() {
	int x, y, z;
	float p, q;
	cout << "Vvedi int-chisla x, y, z: ";	cin >> x >> y >> z;
	cout << "Vvedi float-chisla p, q: ";	cin >> p >> q;
	cout << "x + y = " << sum(x, y) << endl;
	cout << "x + y + z = " << sum(x, y, z) << endl;
	cout << "p + q = " << sum(p, q) << endl;
}

