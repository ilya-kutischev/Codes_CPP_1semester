/*«адан массив слов (т.е. строк, состо€щих из одного слова), например,
фамилий. ќтсортировать массив в алфавитном пор€дке по первому символу слова.*/
#include <iostream>
using namespace std;
void sortByFirstLetter(char** mas, int* n);
int main() {
    int n, m;
    // ƒинамический двумерный массив char
    cout << "Vvedi n-chislo strok:";  cin >> n;
    char** pstr2 = new char* [n];   		 // выделение пам€ти под указатели на строки

    cout << "Enter m-chislo max simvolov in strokax: ";  cin >> m;
    cin.ignore();

    cout << "Enter " << n << " stroki up_to " << m << " simvolov:\n";
    for (int i = 0; i < n; i++) {
        pstr2[i] = new char[m + 1];   		  // выделение пам€ти под i-ую строку текста
        gets_s(pstr2[i], m + 1);
    }
    // ¬ывод массива строк
    cout << "\nMassiv strok: \n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;


    sortByFirstLetter(pstr2, &n);



    // ¬ывод массива строк
    cout << "\nMassiv strok after exchange:\n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;

    // ќсвобождение пам€ти, занимаемой массивом строк
    for (int i = 0; i < n; i++)
        delete[] pstr2[i];        		// освоб.пам€ти,занимаемой i-ой строкой
    delete[] pstr2;                		// освоб.пам€ти,занимаемой указат. на строки
}

void sortByFirstLetter(char** mas, int* n) {  //сортировка по первым буквам сторки

    int flag = 1; char* x;    int i = 1;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (mas[j][0] > mas[j + 1][0])  //первые буквы строки

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }

        i++;

    }

}