// ������ 7. �������� ����������  ������� �� ��������,
// ������ � ���������. 
#include <iostream>
using namespace std;

void swapVal(int, int);			// �������� ���������� �� �������� (�����)
void swapLink(int&, int&);		// �������� ���������� �� ������
void swapPtr(int*, int*);		// �������� ���������� �� ���������
int main() {
    int x = 5, y = 10;
    cout << " main  x: " << x << " y: " << y << endl;		// x: 5 y: 10
    swapVal(x, y);
    cout << " main  After swapVal  x: " << x << " y: " << y << endl;	// x: 5  y: 10
    //   x = 5; y = 10;
    cout << "\n main  x: " << x << " y: " << y << endl;		// x: 5  y: 10
    swapLink(x, y);
    cout << " main  After swapLink  x: " << x << " y: " << y << endl;	// x: 10  y: 5
    x = 5; y = 10;
    cout << "\n main  x: " << x << " y: " << y << endl;		// x: 5 y: 10
    swapPtr(&x, &y);
    cout << " main  After swapPtr  x: " << x << " y: " << y << endl;	// x: 10  y: 5
}

// �������� ���������� �� �������� (�����)
void swapVal(int x, int y) {				// ������� swapVal
    int temp;
    temp = x; x = y; y = temp;
    cout << "swapVal  x: " << x << " y: " << y << endl;		// x: 10  y: 5
}

// �������� ���������� �� ������
void swapLink(int& rx, int& ry) {			// ������� swapLink
    int temp;
    temp = rx;	rx = ry;	ry = temp;
    cout << "swapLink  rx: " << rx << " ry: " << ry << endl;	// x: 10  y: 5
}

// �������� ���������� �� ���������
void swapPtr(int* px, int* py) {			// ������� swapPtr
    int temp;
    temp = *px;	*px = *py; *py = temp;
    cout << "swapPtr  *px: " << *px << " *py: " << *py << endl;	// x: 10  y: 5
}


