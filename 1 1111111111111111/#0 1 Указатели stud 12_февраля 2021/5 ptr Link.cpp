// ������ 5.  ������������� ������.
#include <iostream>
using namespace std;

void main(){
    int x = 10;
    int &rx = x;
// ��� ������ ����� ������ �� ����������. ����� x � rx ���� � ��� ��.
    cout << "x =  " << x <<"  &x = " << &x << '\n';		// x =  10   &x = 0073F810
    cout << "rx = " << rx << "  &rx = " << &rx << '\n';	// rx = 10  &rx = 0073F810
    x++;					// x � rx ���������� ������, ������� � x
    rx++;					// � rx ������� �������� �� 2
    cout << "x =  " << x << "  &x = " << &x << '\n';		// x =  12  &x = 0073F810
    cout << "rx = " << rx << "  &rx = " << &rx << '\n';		//rx =  12  &rx = 0073F810
    int y = 20;
    rx = y;
    rx++;
    cout << "x =  " << x << "  &x = " << &x << '\n';		// x =  21  &x = 0073F810
    cout << "rx = " << rx << "  &rx = " << &rx << '\n';		// rx = 21  &rx = 0073F810
    cout << "x =  " << x << "  y = " << y << endl;		// x =  21  y =  20
// rx = &y				// ������
}


