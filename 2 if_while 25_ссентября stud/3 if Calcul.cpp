// Пример 3. Написать программу-калькулятор, которая может
// выполнять только четыре действия:	 +, -, *, /.
#include <iostream>
using namespace std;

int main() {
    double a, b, rez; 	char oper;
    cout << "Enter a  and  b: ";		cin >> a >> b;
    cout << "Input the operation: ";	cin >> oper;
    if (oper == '+') { rez = a + b;    cout << '\n' << a << " + " << b << " = " << rez << endl; }
    else
        if (oper == '-') { rez = a - b;      cout << '\n' << a << " - " << b << " = " << rez << endl; }
        else
            if (oper == '*') { rez = a * b;     cout << '\n' << a << " * " << b << " = " << rez << endl; }
            else
                if (oper == '/')
                    if (b != 0) { rez = a / b;	cout << "\n\t" << a << " / " << b << " = " << rez << endl; }
                    else    cout << "Division by zero!\n";
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/')
        cout << "Incorrect operation!\n";
}
