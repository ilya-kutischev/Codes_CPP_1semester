// Пример 9. Создать динамический   массив структур, каждый
// элемент которого содержит информацию о студенте:
// фамилия, имя, отчество (вводим);
// массив оценок (вводим);
// средний балл (вычисляем)
#include <iostream>
#include <iomanip>
using namespace std;
const int m = 4, k = 10;
struct Complexs {			// описание структурного типа Student
    char name[k];
    int mark[m];
    float middle;
};
void input(Complexs*, int, int);  	// функция ввода информации
void show(Complexs*, int);		// функция вывода информации
float middleMark(int*, int);		//функция выч. среднего балла
int main() {
    int n;
    cout << "Enter number student: ";
    cin >> n;					// количество студентов
    Complexs* array = new Complexs[n];		// динамический массив структур
    input(array, n, m);
    show(array, n);
    delete[] array;
}
void input(Complexs* mas, int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        cout << "Enter name: "; 	cin >> mas[i].name;
        cout << "Enter 4 mark: ";
        for (int j = 0; j < size2; j++)
            cin >> mas[i].mark[j];
        mas[i].middle = middleMark(mas[i].mark, size2);
    }
}
void show(Complexs* mas, int size) {
    cout << "Spisok student" << endl;
    cout << "Name:    Middle mark:" << endl;
    for (int i = 0; i < size; i++)
        cout << setw(10) << left << mas[i].name << mas[i].middle << endl;
}
float middleMark(int* mas, int size) {
    float sum = 0, sr;
    for (int i = 0; i < size; i++)
        sum = sum + mas[i];
    sr = sum/size;				// средний балл
    return sr;
}


