// ������ 8. ������� ���������� ���������.
// �������� ����������  ������� fun1() �� ������.
// �������� ����������  ������� fun2() �� ���������.
#include<iostream>
using namespace std;

int* fun1(int&, int&);
int* fun2(int*, int*);
int main() {
    int a = 2, b = 1;
    int* p;
    p = fun1(a, b);			// 2
    cout << *p << endl;
    p = fun2(&a, &b);			// 2
    cout << *p << endl;
}

int* fun1(int& x, int& y) {		// fun1(): ��������� ������� � ������
    if (x > y) return &x;
    else return &y;
}

/*int* fun1(int& x, int& y){
  int t;
  if(x > y) t = x; else t = y;
  return &t;
}*/

int* fun2(int* x, int* y) {		// fun2(): ��������� ������� � ���������
    if (*x > * y) return x;
    else return y;
}