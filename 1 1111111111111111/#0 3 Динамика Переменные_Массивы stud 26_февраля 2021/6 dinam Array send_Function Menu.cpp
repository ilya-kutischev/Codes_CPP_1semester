#include <iostream>
using namespace std;

int main()
{
    int dim; // размер массива
    cout << "Enter integer value: ";
    cin >> dim; // получение от пользовател€ размера массива

    int* p_darr = new int[dim]; // ¬ыделение пам€ти дл€ массива
    for (int i = 0; i < dim; i++) {
        // «аполнение массива и вывод значений его элементов
        p_darr[i] = i;
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }


    delete[] p_darr; // очистка пам€ти
    return 0;
}

int removeAscendingChains(int* arr, int* dim) {       //удалить возрастающие цепочки, функци€ принимает указатель  и размер массива



}