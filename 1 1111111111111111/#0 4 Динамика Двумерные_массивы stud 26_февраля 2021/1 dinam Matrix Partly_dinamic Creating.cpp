// ������ 1. �������� ������������ �������.  ���������� ����� - const.
// ���������� ������ ����������.
// ��� ������ ������  ���������� ������������ ������.
// ����� ��� ������ ������ ������� ������ ���������� ���������.
#include<iostream>
#include <ctime>
using namespace std;

const int DIM = 20;
int main(){
    int  n, sum;
    system("cls");
    cout << " Enter n -- number strok: ";  cin >> n ;
    int* ptr[DIM];      // ������ ���������� �� ������
    int m[DIM];         // ������ ��� �������� ���������� ��������� ������ ������ 
    srand(time(NULL));
// ��������� ������������ ������ ��� ������ �������
    for ( int i = 0; i < n; i++) {
      cout << " Enter m[i] -- number elements in stroke: ";
      cin >> m[i];
         ptr[i] = new int[m[i]];          	  // ��������� ������ ��� i-�� ������ ������� 
        for (int j = 0; j < m[i]; j++)            // ���������� i-�� ������ �������
            ptr[i][j] = rand() % 25 - 9;
    }

    cout << "Matrix source:  " << endl;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m[i]; j++) {
            cout.width(5);
            cout << *(ptr[i] + j);                	 
        }
        cout << endl;
    }

// ���������� ����� ���������� � ������ ������
    for (int i = 0; i < n; i++) {
        sum = 0; 
        for (int j = 0; j < m[i]; j++)
            sum = sum + ptr[i][j];
        cout << "sum = " << sum << endl;
    }
    
// ������������ ������������ ������,���������� �������� �������
    for (int i = 0; i < n; i++)
        delete [] ptr[i];                     // �����.������, ���������� i-�� ������� ������� X
}

