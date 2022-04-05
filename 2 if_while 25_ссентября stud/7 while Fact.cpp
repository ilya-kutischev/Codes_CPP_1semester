// Пример 7. Цикл типа while. Вычислить значение  f = n!.
#include <iostream>
using namespace std;
int main() {
	int f = 1; int n, i = 1;
	cout << "Vvedi n > 0:  ";	cin >> n;
	while (i <= n) { f = f * i;	i++; }
	cout << "f = " << f << '\n';
}
