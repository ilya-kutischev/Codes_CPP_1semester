
// ������ 10. ������������ �����������   ������ ��������, ������
// ������� �������� �������� ���������� � ��������:
// 	-�������, ���, �������� (������);
// 	-������ ������ (������);
// 	-������� ���� (���������)

#include <iostream>
using namespace std;
const int m = 4, k = 10;		
struct Student {                   	 // �������� ������������ ���� Student
    char name[k];
    int mark[m];
    float middle;
};
void input(Student*, int, int);  	// ������� ����� ����������
void show(Student*, int);		// ������� ������ ����������
float middleMark(int*, int);		//������� ���. �������� �����
int main() {
    const int n = 3;			// ���������� ���������
    Student array[n];			// ����������� ������ ��������
    input(array, n, m);
    show(array, n);
}
void input(Student* mas, int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        cout << "Enter name: "; 	cin >> mas[i].name;
        cout << "Enter 4 mark: ";
        for (int j = 0; j < size2; j++)
            cin >> mas[i].mark[j];
        mas[i].middle = middleMark(mas[i].mark, size2);
    }
}
void show(Student* mas, int size) {
    cout << "Spisok student" << endl;
    cout << "  Name:    Middle mark:"<< endl;
    for (int i = 0; i < size; i++)
       cout <<"   "<<  mas[i].name << "      " << mas[i].middle << endl;
}
float middleMark(int* mas, int size) {
    float sum = 0, sr;
    for (int i = 0; i < size; i++)
        sum = sum + mas[i];
    sr = sum/size;				// ������� ����
    return sr;
}






