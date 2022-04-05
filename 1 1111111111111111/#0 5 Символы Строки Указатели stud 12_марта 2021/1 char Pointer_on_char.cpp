// Пример 1. Использование указателя на тип char.
#include <iostream>
using namespace std;

int main(){
   char a = '5', b = '3';
   cout<<a<<' '<<b<<' '<<a % b<<' '<<a / b<<'\n';		// 5 3 2 1
// код символа '5' равен 53, код символа '3' равен 51

   a = '1';   b = '2';
   cout<<a<<' '<<b<<endl;			// 1 2
   char* p(&a);	char* q(&b);
   cout  << *p << ' ' << *q << endl;		// 1 2
   char c;
   char* r = &c;
   *r = *p + *q;	
   cout << (int)*r <<' '<< *r<<endl;		// 99 c
   cout << *p % *q << ' ' << *p / *q <<endl;	// 49 0
   (*p)++; 
    cout << *p / *q << ' ' << *p % *q <<endl;	// 1 0
}	









