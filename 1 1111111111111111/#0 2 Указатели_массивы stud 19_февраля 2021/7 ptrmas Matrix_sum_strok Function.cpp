// Пример 7. В данной целочисленной матрице a[n][m] найти
// сумму элементов в каждой строке, используя функцию нахождения
// суммы элементов в одномерном массиве.
#include <iostream>
using namespace std;

    const int D1 = 20, D2 = 20;
    int Summa(int*, int );
    int main(){
	int matr[D1][D2], s[D1];
	int n, m;
	cout<<"Vvedi n, m: ";	cin>>n>>m;	
	srand(n+m);
	for(int i = 0; i < n; i++)
	  for(int j = 0; j < m; j++)
	    matr [i][j] = rand() % 25 - 10;

        cout << endl << " Matrix:" << endl;
	for(int i = 0; i < n; i++){
	  for(int j = 0; j < m; j++){
	    cout.width(4);	
 	    cout<< matr [i][j];
	  }
	  cout<<endl;
	}

        for(int i = 0; i < n; i++)
	  s[i] = Summa(matr[i], m);		// вызов функции Summa()

        for(int i = 0; i < n; i++)
          cout<<"summa elementov "<<i<<" stroki = "<<s[i]<<endl;
        }

    int Summa(int* ar, int size){
        int sum = 0;
        for(int i = 0; i < size; i++)
          sum = sum + ar[i];
        return sum;
    }
