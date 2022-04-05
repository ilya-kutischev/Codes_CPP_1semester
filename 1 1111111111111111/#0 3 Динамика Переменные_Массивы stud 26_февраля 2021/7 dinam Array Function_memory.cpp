// Пример 7. Найти сумму элементов одномерного динамического массива.
// Использовать функции для выделения памяти, выбора типа заполнения массива
// – через ввод значений элементов или случайным образом, вывода массива. 
#include<iostream>
#include <ctime> 
using namespace std;

const int maxSIZE = 20;			// максимальный размер массива
int viborVvod();			// выбор типа ввода
int* memoryArray(int size); 		// выделение памяти под массив 
void printArray(int* p, int size);	// вывод массива через указатели
void fillConsol(int* p, int size);	// заполнение массива с консоли
void fillRand(int* p, int size);	// заполнение rand-числами до 100
int sum(int* p, int size); 		// сумма элементов массива
int main(){
  srand(time(NULL));

  int choice = viborVvod();		// выбор создания массива
  cout<<"choice="<<choice<< endl;

  int size = 0;				// размерность массива
  while(size < 2 || size > maxSIZE){
    cout<< "Enter size of array (from 2 to "<<maxSIZE<< ") ";
    cin>>size;
  }
  cout<<"size = "<<size<<endl;

  int * ptr = memoryArray(size);		// вызов memoryArray()
		
  switch(choice){				// создание массива
     case 1 : fillConsol(ptr, size); break;	// вызов fillConsol()
     case 2 : fillRand(ptr, size); break;	// вызов fillRand()
     default: break;
  }

  printArray(ptr, size);			// вызов printArray()

  int summa = sum(ptr, size);			// вызов sum()

  cout<<"Sum of elements in the array = "<<summa<<endl;
  delete [] ptr;				// освобождение памяти 
}

int viborVvod(){				// функция
   int vibor = 0;
   while (vibor != 1 && vibor != 2) {
      cout<<"1: array from console \n"
          <<"2: array with random numbers \n";
      cin >> vibor;
   }
   return vibor;
}

int* memoryArray(int size){			// функция memoryArray()
    int * p = new int[size];			// выделение памяти
    if (!p){cout<<"Error! No memory\n"; system("pause"); exit(1);}
    return p;
}

void printArray(int* p, int size){		// функция printArray()
     for(int* q = p; q != p + size; q++)
        cout << *q << " ";
     cout << endl;
}

void fillConsol(int* p, int size){		// функция fillConsol()
   for(int i = 0; i<size; i++){
      cout << "Input array[" << i << "]   ";
      cin >> p[i];
   }
}
void fillRand(int* p, int size){		// функция fillRand()
   for(int i = 0; i < size; i++)
     p[i] = rand() % 100;
}

int sum(int* p, int size){			// функция sum()
   int sum = 0;
   for(int i = 0; i < size; i++)
     sum = sum + p[i];
   return sum;
}


