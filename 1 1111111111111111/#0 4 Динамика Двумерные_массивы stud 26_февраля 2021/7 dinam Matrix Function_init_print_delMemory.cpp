// Пример 6. Память для двумерного динамического массив
// выделяется в main() и адрес её передаётся в функци init(), print(),
// delMemory(). 
#include <iostream>
using namespace std;

void init(int**, int, int);		// прототип функции init()
void print(int**, int, int);		// прототип функции print()
void delMemory(int**, int, int);	// прототип функции delMemory()
int main(){
   int m, n;
   cout<<"Enter n -- number strok: ";	cin>>n;
   cout<<"enter m -- number elements in stroke: "; cin>>m;

   int** ptr = new int* [n];				
   for(int i = 0; i < n; i++){
      ptr[i] = new int[m];
   }

  init(ptr, n, m);		
  cout<<"Matrix: "<<endl;
  print(ptr, n, m);			
  delMemory(ptr, n, m);		
}
void init(int** p, int n, int m){		// функция init()
    srand(n + m);
    for(int i = 0; i < n; i++)
       for(int j = 0; j < m; j++)	
         p[i][j] = rand() % 25 - 10;
}
void print(int** p, int n, int m){		// функция print() 
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cout.width(5);  cout<<p[i][j];
      }
      cout<<endl;
    }
}
void delMemory(int** p, int n, int m){		 // функция delMemory() 
    for(int i = 0; i < n; i++)
      delete [] p[i];
    delete [] p;
}
