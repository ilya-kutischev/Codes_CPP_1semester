#include <iostream>
using namespace std;

int main()
{
    int dim; // ������ �������
    cout << "Enter integer value: ";
    cin >> dim; // ��������� �� ������������ ������� �������

    int* p_darr = new int[dim]; // ��������� ������ ��� �������
    for (int i = 0; i < dim; i++) {
        // ���������� ������� � ����� �������� ��� ���������
        p_darr[i] = i;
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }


    delete[] p_darr; // ������� ������
    return 0;
}

int removeAscendingChains(int* arr, int* dim) {       //������� ������������ �������, ������� ��������� ���������  � ������ �������



}