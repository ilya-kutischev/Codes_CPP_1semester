// Пример 6. Найти произведение нечетных чисел из диапазона [n, m].
#include <iostream>
using namespace std;
int main() {
	int n, m;
	int result = 1;
	cout << "Enter n, m: "; cin >> n >> m;	   // ввод чисел через пробел, 
	for (int i = n; i <= m; i++) {		   // например, 4 9
		if (i % 2 == 0) continue;
		result *= i;
	}
	cout << "result = " << result << endl;
}

