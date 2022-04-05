/*������ ������ �����. � ������ ������ ������ ������� ����� �������� �����.
������� ������ ����� ���� � ������������� ��� � ���������� �������.*/
#include <iostream>
#include <cstring>
using namespace std;
void sortByAlphabet(char** mas, int* n);
void findWords(char** slova, char* str, int*, int);
int main() {
    int n, m, len;
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
    cout << "\nEnter length of words to find:\n";
    cin >> len;
    cout << "\nMassiv strok: \n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;

    int kol = 0;

    char** slova = new char* [n * m + 1];
    for (int i = 0; i < n; i++) {
        findWords(slova, pstr2[i], &kol, len);
    }
    cout << "\nMassiv slov dannoi dlini:\n";
    for (int i = 0; i < kol; i++)
        cout << slova[i] << endl;

    sortByAlphabet(slova, &kol);

    // ����� ������� �����
    cout << "\nMassiv slov dannoi dlini sorted:\n";
    for (int i = 0; i < kol; i++)
        cout << slova[i] << endl;

    // ������������ ������, ���������� �������� �����
    for (int i = 0; i < n; i++)
        delete[] pstr2[i];        		// �����.������,���������� i-�� �������
    delete[] pstr2;                		// �����.������,���������� ������. �� ������
    for (int i = 0; i < kol; i++)
        delete[] slova[i];
    delete slova;
}

void findWords(char** slova, char* str, int* kol, int len) {
    int lenslova;
    const char* pat = ", . ;";			// ����������� ����
    char* context = NULL;
    char* word = NULL;
    word = strtok_s(str, pat, &context);		// ������ �����
    while (word) {
        if (word != NULL) {
            lenslova = strlen(word);
            if (lenslova == len) {
                slova[*kol] = new char[lenslova + 1];
                strcpy_s(slova[*kol], lenslova + 1, word);
                (*kol)++;
            }
            word = strtok_s(NULL, pat, &context);
        }
    }
}

void sortByAlphabet(char** mas, int* n) {  //���������� �� ������ ������ ������

    int flag = 1; char* x;    int i = 1;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (strcmp(mas[j], mas[j + 1]) > 0)  //������ ����� ������

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }
        i++;


    }

}
