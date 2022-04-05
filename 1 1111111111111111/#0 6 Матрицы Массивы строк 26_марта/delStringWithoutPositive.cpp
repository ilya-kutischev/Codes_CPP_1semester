#include<iostream>
using namespace std;
int sumNumDigits(int n);
int IsStringPositive(int* str, int* m);
void delStringWithoutPositive(int** mas, int* n, int* m);
void sortBySumDigFirstNum(int** mas, int* n, int* m);



int main() {
    int n, m;
    cout << "Enter n: \n ";  cin >> n;
    cout << "Enter m: \n ";  cin >> m;
    int** ptr = new int* [n];
    for (int i = 0; i < n; i++)
        ptr[i] = new int[m];

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

    delStringWithoutPositive(ptr, &n, &m);
    cout << "\n your array: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);  cout << ptr[i][j];
        }
        cout << endl;
    }
    sortBySumDigFirstNum(ptr, &n, &m);

    cout << "\n your array: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);  cout << ptr[i][j];
        }
        cout << endl;
    }



}
int sumNumDigits(int n) {
    int sum = 0;
    if (n < 0) { n *= -1; }
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int IsStringPositive(int* str, int* m) {
    int fl = 0;
    for (int i = 0; i < *m; i++) {
        if (str[i] > 0) { fl = 1; break; }
    }
    return fl;
}

void delStringWithoutPositive(int** mas, int* n, int* m) {
    for (int i = 0; i < *n; i++) {
        if (!IsStringPositive(mas[i], m)) {
            (*n)--;
            delete[] mas[i];

            for (int j = i; j < *n; j++) {
                mas[j] = mas[j + 1];
            }
            i--;
        }

    }


}
void sortBySumDigFirstNum(int** mas, int* n, int* m) {


    int flag = 1; int* x;    int i = 1;

    while (flag) {

        flag = 0;

        for (int j = 0; j < *n - i; j++)

            if (sumNumDigits(mas[j][0]) < sumNumDigits(mas[j + 1][0]))
            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }

        i++;

    }

}