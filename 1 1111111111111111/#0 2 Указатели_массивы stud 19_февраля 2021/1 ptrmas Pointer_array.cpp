// ������ 1. ��������� � �������.
#include<iostream>
using namespace std;

void main() {
    int mas[] = { 5,2,3,4 };			// ��� ������� -- ����������� ���������
    int* ptr = mas;				// ��������� ������������� ����� �������
// ����� ������ �������
    cout << &mas[0] << ' ' << mas << ' ' << &mas << endl;
    cout << &ptr[0] << ' ' << ptr << endl;

// ����������� ������� ������� � ���������
    cout << sizeof(mas) << endl;		// 16  ������ �������
    cout << sizeof(ptr) << endl;		// 4   ������ ���������

// ������ � ��������� �������
// ����� ������� � �������� ��������� ������� 
    int n = sizeof(mas)/sizeof(mas[0]);	
    cout<<"n =  " << n << endl;			// n = 4		
    for (int i = 0; i < n; i++)
        cout << (mas + i) << ' ' << *(mas + i) << ' ' << mas[i] << endl;  // ������ ���������
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << (ptr + i) << ' ' << *(ptr + i) << ' ' << ptr[i] << endl;  // ��������� ���������
    cout << endl;

    cout << "*ptr = " << *ptr << endl;		// 5
    cout << "*mas =  " << *mas << endl;		// 5  ��� ������� ����� ������������


// ��������� �������
    int k = &mas[3] - &mas[0];
    cout << "k =  " << k << endl;		// k = 3
    k = &mas[3] - mas;
    cout << "k =  " << k << endl;		// k = 3
    cout << endl;

    // �������� ++ � --
    cout << *ptr++ << endl;			// 5
    cout << *ptr << endl;			// 2
    cout << (*ptr)++ << endl;			// 2
    cout << *ptr << endl;			// 3


//    mas = ptr; 				// ������!!!
//    mas++;					// ������!!!
//    *mas++;					// ������!!!
}
