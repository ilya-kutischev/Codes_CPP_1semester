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
void sortByQuantityOfMins(int** mas, int n);
int kolMin(int* a, int n);
void delFirstStr(int** p, int n)
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
             << "end programm-->5\n"
             << "do changes---->6\n";
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
          case 6: delFirstStr(ptr, n); sortByQuantityOfMins(ptr, n); break;
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

int kolMin(int* a, int n) {
    int min = *a, kolvo = 0;

    for (int i = 0; i < n; i++) {

        if (*(a + i) == min)kolvo++;   //если находит подобное наименьшее- увеличивает количество

        if (*(a + i) < min) { min = *(a + i); kolvo = 1; }//если нашлось число меньше
    }

    return kolvo;

}

void delFirstStr(int** p, int n) {
    for (int i = 0; i < n - 1; i++)
        p[i] = p[i + 1];

    delete[] p[n];
    (*n)--;
}
}

void sortByQuantityOfMins(int** mas, int n) {

    int flag = 1; int* x;    int i = 1;                                   

    while (flag) {

        flag = 0;

        for (int j = 0; j < n - i; j++)

            if (kolMin(mas[j],n) > kolMin(mas[j + 1],n))

            {

                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;

                flag = 1;

            }

        i++;

    }

}


   








