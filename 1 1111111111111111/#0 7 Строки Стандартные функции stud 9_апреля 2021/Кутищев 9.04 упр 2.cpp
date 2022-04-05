/*Ввести массив строк. В каждой строке текста выбрать слова заданной длины.
Создать массив таких слов и отсортировать его в алфавитном порядке.*/
#include <iostream>
#include <cstring>
using namespace std;
void findWordsByLength(char** mas, char** foundWords, int* amountWords, int* n, int* m, int* length);
void sortByAlphabet(char** mas, int* n);
const int SIZE = 100;
int main() {
    int n, m, len;
    // Динамический двумерный массив char
    cout << "Vvedi n-chislo strok:";  cin >> n;
    char** pstr2 = new char* [n];   		 // выделение памяти под указатели на строки

    cout << "Enter m-chislo max simvolov in strokax: ";  cin >> m;
    cin.ignore();

    cout << "Enter " << n << " stroki up_to " << m << " simvolov:\n";
    for (int i = 0; i < n; i++) {
        pstr2[i] = new char[m + 1];   		  // выделение памяти под i-ую строку текста
        gets_s(pstr2[i], m + 1);
    }

    cout << "\nEnter length of words to find:\n";

    cin >> len;

    cout << "\nMassiv strok: \n";
    for (int i = 0; i < n; i++)
        cout << pstr2[i] << endl;

    char** foundWords = new char* [SIZE];
    int amountWords = 0;
    findWordsByLength(pstr2, foundWords, &amountWords, &n, &m, &len);
    sortByAlphabet(foundWords, &amountWords);



    // Вывод массива строк
    cout << "\nMassiv slov dannoi dlini:\n";
    for (int i = 0; i < amountWords; i++)
        cout << foundWords[i] << endl;

    // Освобождение памяти, занимаемой массивом строк
    for (int i = 0; i < n; i++)
        delete[] pstr2[i];        		// освоб.памяти,занимаемой i-ой строкой
    delete[] pstr2;                		// освоб.памяти,занимаемой указат. на строки
}

void findWordsByLength(char** mas, char** foundWords, int* amountWords, int* n, int* m, int* length) {
    int count = 0;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++) {
            if (j == 0 || mas[i][j] == ' ') count = 0;

            if (mas[i][j] != ' ') count++;
            if ((mas[i][j + 1] == ' ' || mas[i][j + 1] == 0) && count == *length) {

                foundWords[*amountWords] = new char[*length];
                for (int k = *length; k > 0; k--) {

                    foundWords[*amountWords][*length - k] = mas[i][j - k + 1];
                }
                foundWords[*amountWords][*length] = '\0';
                cout << endl << foundWords[*amountWords] << endl;
                (*amountWords)++;
            }
        }
    }
}
void sortByAlphabet(char** mas, int* n) {  //сортировка по первым буквам сторки

    int flag = 1; char* x;    int i = 1;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (strcmp(mas[j], mas[j + 1]) > 0)  //первые буквы строки

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }
        i++;


    }

}

// qwe qer qwr qwer
//asd adf ags axc awr