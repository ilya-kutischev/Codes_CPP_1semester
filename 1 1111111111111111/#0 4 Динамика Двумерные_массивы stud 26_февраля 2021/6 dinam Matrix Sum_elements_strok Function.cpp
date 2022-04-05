// ������ 6. � ������������ ������� �� n ����� � m �������� �����  
// ����� ��������� � ������ ������, ��������� ������� ���������� 
// ����� � ���������� �������. �������� ������ ��������� ����.
#include<iostream>
using namespace std;

int sum(int*, int);
int main() {
    int n, m;
    cout << "Enter n, m:"; cin >> n >> m;
    int* summa = new int[n]; 			// ������������ ������ ����
    srand(n + m);
    int** ptr = new int* [n];  			// �������� ������������ �������
    for (int i = 0; i < n; i++) {
        ptr[i] = new int[m];
        for (int j = 0; j < m; j++)
            *(ptr[i] + j) = rand() % 25 - 9;;
    }
    cout << "\tMatrix source: \n";
    for (int i = 0; i < n; i++) {			
        for (int j = 0; j < m; j++) {
            cout.width(5);	cout << ptr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        summa[i] = sum(ptr[i], m);		// ���������� �����  ������ 
    }
    cout << "Summa elements of strok: " << endl;	
    for (int i = 0; i < n; i++)
        cout << '\t' << summa[i] << endl;
    
    delete[] summa;				// �������� ������� ����
    for (int i = 0; i < n; i++)
        delete [] ptr[i];			// �������� �����
    delete [] ptr;				// �������� ������� ����������
}
int sum(int* p, int m) {			// ������� sum()
    int s = 0;
    for (int i = 0; i < m; i++)
        s = s + p[i];
    return s;
}


  
