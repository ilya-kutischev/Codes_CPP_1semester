#include <iostream>
#include <cmath>
using namespace std;
// ������ 3. ���� ��� �������������� ����� a � b. �������� � ������ ������� 
// ������� �� ��� � � ��������� ������� �������.
// ������� ����� �������� a � b.
int main() {
	double a, b;
	cout << "Enter the number a, b: ";		cin >> a >> b;
	cout << " a = " << a << "  b = " << b << endl;
	if (a > b) { a = pow(a, 3); b = pow(b, 4); }
	else { a = pow(a, 4); b = pow(b, 3); }
	cout << " a = " << a << "  b = " << b << endl;
}

