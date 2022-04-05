// Пример 3. В данной целочисленной матрице matr[n][m] переставить
// местами 0 и 1 строки, используя массив указателей на строки.
// Для перестановки строк использовать функцию.
#include <iostream>
using namespace std;

void obmen(int**, int, int);
const int D1 = 20, D2 = 20;
int main(){
    int matr[D1][D2], n, m;
    int* ptr[D1]; 			        // массив указателей ptr
    cout << "Vvedi n, m: ";  cin >> n >> m;
    srand(n + m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matr[i][j] = rand() % 25 - 10;
    cout << endl << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << matr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)		// инициализация массива указателей
        ptr[i] = matr[i];
    // или  ptr[i] = &matr[i][0];  или  ptr[i] = (int*)&matr[i];


    cout << " main:  Adresa stok matrix:" << endl;
    for (int i = 0; i < n; i++)        
        cout << "matr["<<i<<"]: "<< matr[i] << " ptr["<<i<<"]: " << ptr[i] << endl;
   
    /*   int* p = ptr[0];		// перестановка 0 и 1 строк
    ptr[0] = ptr[1];
    ptr[1] = p;
*/

 obmen(ptr, n, m);
  cout << " Matrix after exchange" << endl;
  cout << " Used array_pointers:" << endl;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          cout.width(5);
          cout << *(ptr[i] + j);	// вывод массива, используя указатель		
      }
      cout << endl;
  }
}
void obmen(int** p, int n, int m){
// значение p -- адрес массива указателя на строки
    cout << " obmen: " << endl;
    cout << " &p[0]: " << &p[0] << " p: " << p<<endl;
    cout << " Adresa strok:" << endl;
    for (int i = 0; i < n; i++)
       cout << " p["<<i<<"]: " << p[i] << endl;
    
    cout << " Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(5);
            cout << *(p[i] + j);	// вывод массива, используя указатель		
        }
        cout << endl;
    }
    int* r = p[0];			// перестановка 0 и 1 строк
    p[0] = p[1];
    p[1] =  r;
}
