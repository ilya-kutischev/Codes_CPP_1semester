#include <iostream>
#include <iomanip>
using namespace std;
struct Complexs {			
    float rational;
    float complex;
};
void input(Complexs*, int);  	// ������� ����� ����������
void show(Complexs*, int);		// ������� ������ ����������
void sort(Complexs*, int);
int main() {
    int n;
    cout << "Enter number of nums: ";
    cin >> n;					// ����������
    Complexs* array = new Complexs[n];		// ������������ ������ ��������
    input(array, n);
    show(array, n);
    sort(array, n);
    cout << "after sorting:" << endl;
    show(array, n);
    delete[] array;
}
void input(Complexs* mas, int size1) {
    for (int i = 0; i < size1; i++) {
        cout << "Enter rational part of " << i + 1 << " num "; 	cin >> mas[i].rational;
        cout << "Enter complex part of " << i + 1 << " num "; cin >> mas[i].complex;
    }
}
void show(Complexs* mas, int size) {
    cout << "List of nums" << endl;
    for (int i = 0; i < size; i++)
        cout << mas[i].rational << "+" << mas[i].complex << "i" << endl;
}
void sort(Complexs* mas, int n) {
    int flag = 1; Complexs x;    int i = 1;
    while (flag) {
        flag = 0;
        for (int j = 0; j < n - i; j++)
            if (mas[j].rational > mas[j + 1].rational)
            {
                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;
                flag = 1;
            }
        i++;
    }
}
