// Пример 4. Цикл типа for. Вычислить значение  f = n!.
#include <iostream>
using namespace std;
int main() {
	int fact = 1, n;
	cout << "Vvedi n > 0:  ";	cin >> n;
	for (int i = 1; i <= n; i++)
          fact = fact * i;
	cout << "fact = " << fact << '\n';
}