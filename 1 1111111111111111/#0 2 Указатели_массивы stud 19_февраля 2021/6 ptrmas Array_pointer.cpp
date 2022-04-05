// Пример 6. В данной целочисленной матрице matr[n][m] переставить
// местами 1 и 2 строки, используя массив указателей на строки.
#include <iostream>
using namespace std;

const int D1 = 20, D2 = 20;
int main() {
  int matr[D1][D2], n, m;
  int* ptr[D1]; 			// массив указателей ptr
  cout << "Vvedi n, m: ";  cin >> n >> m;
  srand(n + m);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
	matr[i][j] = rand() % 25 - 10;

  for (int i = 0; i < n; i++)		// инициализация массива указателей
	ptr[i] = matr[i];
// или  ptr[i] = &matr[i][0];	или  ptr[i] = (int*)&matr[i];

	int* p = ptr[0];		// перестановка 0 и 1 строк
	ptr[0] = ptr[1];
	ptr[1] = p;
// *x=matr[0]; matr[0]=matr[1];  matr[1]=x;  ошибка!!!! matr – const-указатель

  cout << endl << "Matrix:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
	cout.width(5);
	cout << matr[i][j];			
    }
    cout << endl;
  }

   cout << " Matrix after exchange" << endl;
   cout << " Used array_pointers:" <<endl;
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
	cout.width(5);
	cout << *(ptr[i] + j);		// вывод массива, используя указатель		
    }
    cout << endl;
   }

   cout << "Matrix after exchange" << endl;
   cout << " Used name_matrix:" <<endl;
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
	cout.width(5);
	cout << *(matr[i] + j);		// вывод, используя имя массива matr
     }
     cout << endl;
   }
}

