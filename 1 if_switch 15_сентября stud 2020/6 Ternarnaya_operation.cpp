// Пример 5. Использование условной операции.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");		// setlocale(LC_ALL, "russian");
	int x = 7;	int y = 5;
	char sign;
	cout << "Введите знак операции: ";	cin >> sign;
	int result = (sign == '+') ? (x + y) : (x - y);
	cout << "Результат: " << result << '\n';
}
