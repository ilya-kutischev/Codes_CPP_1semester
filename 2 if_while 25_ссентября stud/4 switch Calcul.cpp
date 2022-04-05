// Пример 4. Использование оператора swith. Составить программу-калькулятор
// для выполнения 4 действий: +, -, *, /..
#include <iostream>
using namespace std;

int main() {
	double a, b, rez;		char oper;
	cout << "Enter a and b:";	cin >> a >> b;
	bool flag = true;
	cout << "Enter  operation: ";	cin >> oper;
	switch (oper) {
	case '+':   rez = a + b;	break;
	case '-':    rez = a - b;	break;
	case '*':   rez = a * b;	break;
	case '/':    if (b == 0) flag = false;		// или if (!b) flag = false;
			else rez = a / b;	break;
	default: flag = false;
	}
	if (flag == true) cout << '\n' << a << ' ' << oper << ' ' << b << '=' << rez << endl;
	else	cout << "Division by zero or incorrect operation.\n";
}



