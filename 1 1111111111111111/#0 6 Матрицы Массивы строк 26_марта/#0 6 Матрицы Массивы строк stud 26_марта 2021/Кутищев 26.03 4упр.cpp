/*����� ������ ���� (�.�. �����, ��������� �� ������ �����), ��������,
�������. ������������� ������ � ���������� ������� �� ������� ������� �����.*/
#include <iostream>
using namespace std;
void sortByFirstLetter(char** mas, int* n);
int main() {
    int n, m;
    // ������������ ��������� ������ char
    cout << "Vvedi n-chislo strok:";  cin >> n;
    char** pstr2 = new char* [n];   		 // ��������� ������ ��� ��������� �� ������

    cout << "Enter m-chislo max simvolov in strokax: ";  cin >> m;
    cin.ignore();

    cout << "Enter " << n << " stroki up_to " << m << " simvolov:\n";
    for (int i = 0; i < n; i++) {
        pstr2[i] = new char[m + 1];   		  // ��������� ������ ��� i-�� ������ ������
        gets_s(pstr2[i], m + 1);
    }
    // ����� ������� �����
    cout << "\nMassiv strok: \n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;


    sortByFirstLetter(pstr2, &n);



    // ����� ������� �����
    cout << "\nMassiv strok after exchange:\n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;

    // ������������ ������, ���������� �������� �����
    for (int i = 0; i < n; i++)
        delete[] pstr2[i];        		// �����.������,���������� i-�� �������
    delete[] pstr2;                		// �����.������,���������� ������. �� ������
}

void sortByFirstLetter(char** mas, int* n) {  //���������� �� ������ ������ ������

    int flag = 1; char* x;    int i = 1;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (mas[j][0] > mas[j + 1][0])  //������ ����� ������

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }

        i++;

    }

}