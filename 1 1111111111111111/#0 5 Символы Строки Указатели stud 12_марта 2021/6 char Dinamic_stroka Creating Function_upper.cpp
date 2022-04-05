// Пример 6. Создание,удаление динамической строки.
// Передача строки в функцию strUpper() -- преобразования
// символов строки к верхнему  регистру.
#include <iostream>
#include <cstring>
using namespace std;

void strUpper(char*);			// прототип функции strUpper()
int main(){
  int n;
  cout<<"Enter max number simvolov v stroke: ";
  cin>>n;
  char * pstr = new char [n+1];
  cin.ignore();
  cout<<"Enter stroku: ";  gets_s(pstr, n+1);	// aSdDfgF
  strUpper(pstr);
  cout<<"\nRezult: "<<pstr<<endl;		// ASDDFG
  cout << endl;
// Вывод символов и их кодов латинского алфавита таблицы ASCII
    for (int i = 65; i <= 90; i++)
        cout << i << ' ' << char(i) << ' ';
    cout << endl;
    for (int i = 65; i <= 90; i++)
        cout << hex << i << ' ' << char(i) << ' ';
    cout << endl;

  delete [] pstr;
}

void strUpper(char* p){				// функция strUpper() 		
   while(*p){					
    if(*p >= 'a' && *p <= 'z') *p = *p - 32;
    p++; 
  }
}

/*void strUpper(char* p){			
  int i = 0;				
  while(*(p+i)){
    if(*(p+i) >= 'a' && *(p+i) <= 'z') *(p+i) = *(p+i) - 32;
    i++; 
  }
}*/


