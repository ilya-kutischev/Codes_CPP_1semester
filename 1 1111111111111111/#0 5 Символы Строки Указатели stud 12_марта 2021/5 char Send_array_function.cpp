// Пример 5. Передача символьного массива функции.
#include <iostream>
using namespace std;
#include <cstring>

void strShow(char *);
void strPrint(const char*);
const int M = 50;
int main(){
  char str[M];
  cout << "Enter char-array" << endl;
  gets_s(str);				// введём 1234567 
  cout << "Source str: ";
  cout<<str<<endl;					
  strShow(str);				// передаётся имя массива

  char* ptr = str;
  strShow(ptr);				// передаётся указатель на массив

  const char * pt = "abcdef";
  strPrint(pt);				// передаётся указатель на константу 
}
// параметр функции – указатель типа char
void strShow(char* p){			// функция вывода строки strShow()
  cout<<"strShow:  str =  ";
  while(*p)
    cout<<*p++;				// 1234567
  cout<<endl;
}
// параметр функции – указатель типа char на костанту
void strPrint(const char* p){		// функция вывода строки strPrint()
  cout<<"strPrint: str =  ";
  while(*p)
   cout<<*p++;				// abcdef
//  p[3] = 'A';				// Нельзя
   cout<<endl;
}
