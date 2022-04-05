// ������ 4. ����� ����� ��������� ����������� �������������
// �������. ������ �������� � main(). ��� ����������
// �����, �����, ������ ��������� ������� ������������ �������.
// ������� 1.
#include <iostream>
using namespace std;

void init(int*, int);			// ������� �������� �������
void print(int*, int); 			// ������� ������ �������
int sum(int*, int); 			// ������� ���. ����� ���������
int main() {
	int n;
	cout << "Enter n -- number elements in array: ";
	cin >> n;				// 5
	int* ptr = new int[n];			// ��������� ������ ��� �������
	init(ptr, n);				// 6 -9 0 -7 7
	cout << "\n Massiv: " << endl;
	print(ptr, n);
	int y = sum(ptr, n);
	cout << "\n Summa = " << y << endl;	// Summa = -3
	delete[] ptr;
}
void init(int* p, int n) {			// ����������� ������� init()
	srand(n);
	for(int i = 0; i < n; i++)
	   p[i] = rand() % 15 - rand() % 10;
}
void print(int* p, int n) {			// ����������� ������� print()
	for(int i = 0; i < n; i++)
	   cout << p[i] << ' ';			// ���	 cout<<*(p+i)<<' ';
	cout << endl;
}
int sum(int* p, int n) { 			// ����������� ������� sum()
	int summa = 0;
	for(int i = 0; i < n; i++)
	   summa = summa + p[i];
	return summa;
}
