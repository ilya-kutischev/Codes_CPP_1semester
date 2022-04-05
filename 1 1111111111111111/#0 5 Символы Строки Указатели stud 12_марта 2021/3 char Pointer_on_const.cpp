// Пример 3. Использование указателя типа char на строку-константу.
#include <iostream>
using namespace std;
#include <cstring>
int main(){
  const char *ps = "0123456789";
  cout<<"ps =       "<<ps<<endl;		// ps = 0123456789
  cout<<"*ps =      "<<*ps<<endl;		// *ps = 0
//--------------------------------------------------------------------
  const char* s1 = ps;
  cout<<"s1 =       "<<s1<<endl;		// 0123456789
  s1 = ps + 5; 
  cout<<"s1 =        "<<s1<<endl;		// s1 = 56789
  s1--;
  cout<<"s1 =        "<<s1<<endl;		// s1 = 456789
  ps = ps +2;
  cout<<"ps =        "<<ps<<endl;		// ps = 23456789
//---------------------------------------------------------------------
  cout<<hex<<&ps<<endl;				// адрес  указателя
  cout<<hex<<(int)ps<<endl;			// адрес строки
  cout<<hex<<(int)&ps[1]<<endl;			// адрес 1-го символа
  cout<<hex<<(int)(ps+9)<<endl;			// адрес 9-го символа
//---------------------------------------------------------------------
// Вывод строковой константы
   cout << "abcdef  " << endl;                           // abcdef
   cout << "adres abcdef==  " << &"abcdef" << endl;      // адрес "abcdef"
   cout << "abcdef"[3] << endl;                          // d
   cout << ("abcdef" + 3) << endl;                       // d
   cout << &"abcdef"[2] << endl;                         // cdef
   cout << "abcdef" + 2 << endl;			 // cdef         

}
