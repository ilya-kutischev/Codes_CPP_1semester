// Пример 8. Динамический массив создаётся в функции.
// Используются функции memory(), init(), print(), delMemory().
// Для выбора функции используется меню.
// В программе имеется возможность при создании массива
// изменять количество элементов -- n.
// Для повторного выполнения функции memory() и при выходе 
// из программы, предварительно следует выполнить функцию delMemory(). 
#include<iostream>
using namespace std;

int** memory(int, int);
void init(int**, int, int);
void print(int**, int, int);
void delMemory(int**, int);
int main() {
    int n, m;
    int prWhile = 1, vibor; 
    int** ptr = 0;
    while(prWhile){
        cout << "Enter number label:\n";
        cout << "memory-------->1\n"
             << "init---------->2\n"
             << "print--------->3\n"
             << "delMemory----->4\n"
             << "end programm-->5\n";
        cin >> vibor;
        switch(vibor){
          case 1: cout << "Enter n: \n ";  cin >> n;
                  cout << "Enter m: \n ";  cin >> m;
                  ptr = memory(n, m);
                  break;
          case 2: init(ptr, n, m);	  break;
          case 3: print(ptr, n, m);  break;
          case 4: delMemory(ptr, n); break;
          case 5: prWhile = 0; break;
        }
    }
    cout << "END PROGRAMM" << endl;
}
int** memory(int n, int m){			// функция выделения памяти
   int** p = new int* [n];
   for(int i = 0; i < n; i++)
      p[i] = new int[m];
   return p;
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
void delMemory(int** p, int n){			// функция delMemory() 
    for(int i = 0; i < n; i++)
      delete [] p[i];
    delete [] p;
}


   








