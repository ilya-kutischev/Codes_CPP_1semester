#include<iostream>
using namespace std;
int FProst(int x);
void delPrimeNums(int** mas, int* n, int* lengths);
void sortByNumberDeleted(int** mas, int* n, int* lengths);
int main() {
    int n, m;
    cout << "Enter n: \n ";  cin >> n;
    cout << "Enter m: \n ";  cin >> m;
    int** ptr = new int* [n];
    for (int i = 0; i < n; i++)
        ptr[i] = new int[m];

    int* lengths = new int[n];
    for (int i = 0; i < n; i++)			// массив длин строк
        lengths[i] = m;

    cout << "\n enter array:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ptr[i][j];

    cout << "\n your array: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);  cout << ptr[i][j];
        }
        cout << endl;
    }

    delPrimeNums(ptr, &n, lengths);
    sortByNumberDeleted(ptr, &n, lengths);

    cout << "\n your array: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < lengths[i]; j++) {
            cout.width(5);  cout << ptr[i][j];
        }
        cout << endl;
    }




}


int FProst(int x) {
    int y, d = 2, fl = 1;
    y = x / 2;
    while (y >= d)
    {
        if (x % d == 0) { fl = 0; d++; }       //если найдется хоть один делитель, fl меняется на 0, начит число сложное.
        else d++;
    }
    return fl;
}


void delPrimeNums(int** mas, int* n, int* lengths) {
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < lengths[i]; j++) {
            if (FProst(mas[i][j])) {
                lengths[i]--;
                for (int k = j; k < lengths[i]; k++) {
                    mas[i][k] = mas[i][k + 1];
                }
                j--;
            }
        }
    }
}
void sortByNumberDeleted(int** mas, int* n, int* lengths) { 

    int flag = 1; int* x;    int i = 1, temp = 0;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (lengths[j] < lengths[j + 1])

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;
                temp = lengths[j]; lengths[j] = lengths[j + 1]; lengths[j + 1] = temp;
                flag = 1;

            }

        i++;

    }

}