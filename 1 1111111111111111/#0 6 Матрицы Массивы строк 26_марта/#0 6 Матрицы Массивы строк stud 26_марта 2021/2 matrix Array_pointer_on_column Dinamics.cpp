// Пример 2. Создать  динамическую  матрицу используя 
// массив указателей на столбцы. Переставить местами 1 и 2 столбцы. 
// Например, задана матрица:
// 1 2 3
// 1 2 3
// n = 2; m = 3; 
// Организовать ввод данных по строкам, по столбцам.
#include <iostream>
using namespace std;
int main(){
  int n, m;
  int** ptr;
  cout<<"Enter n, m: "; cin>>n>>m;
  ptr = new int* [m];                	// память под массив указателей на столбцы
  for(int j = 0; j < m; j++){
    ptr[j] = new int[n];                // память под j-ый столбец
  }

cout<<"Enter matrix po strokam:"<<endl;
for(int i = 0; i < n; i++)		    // ввод по строкам
  for(int j = 0; j < m;j++)                 // заполнение i-ой строки
    cin>>*(ptr[j] + i);

 /* cout<<"Enter matrix po stolbcam:"<<endl;
  for(int j = 0; j < m; j++)                // ввод по столбцам
    for(int i = 0; i < n; i++)              // заполнение j-го столбца
      cin>>*(ptr[j] + i);
  }*/
    
// Вывод по строкам
  for (int i = 0; i < n; i++){              
     for (int j = 0; j < m; j++){
           cout.width(4);
           cout <<*(ptr[j] + i)<<' ';       // так как массив указателей на столбцы

      }
      cout<<endl;   
  }
    int* p = ptr[0];			   // перестановка 0 и 1 столбцов
    ptr[0] = ptr[1];
    ptr[1] = p;

  cout << " Matrix after exchange" << endl;
  for (int i = 0; i < n; i++){              
     for (int j = 0; j < m; j++){
           cout.width(4);
           cout <<*(ptr[j] + i)<<' ';       // так как массив указателей на столбцы

      }
      cout<<endl;   
  }
// Вывод столбцов по строкам 
/*  for(int j = 0; j < m; j++){              
      for(int i = 0; i < n; i++){
           cout.width(4);     
	   cout <<ptr[j][i]<<' ';
      }
      cout<<endl;   
    }
*/ 
  
 }

