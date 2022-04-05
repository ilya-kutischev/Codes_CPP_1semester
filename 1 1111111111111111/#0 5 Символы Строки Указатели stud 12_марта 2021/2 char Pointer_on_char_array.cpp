// Пример 2. Использование указателя на cимвольный массив.
#include <iostream>
using namespace std;
#include <cstring>

const int M = 50;
int main(){
  char str[M];
  cout << "Enter char-array" << endl;
  gets_s(str);						// введём 1234567 
  cout << "Source str using name: ";
  cout<<str<<endl;					// 1234567
  int len = strlen(str);
  cout<<"len = "<<len<<endl;				// len = 7
  cout<<"Adres str: "					// 009BF978  9bf978  9bf978
      <<hex<<&str<<' '<<(int)str<<' '<<(int)&str<<endl;	
  cout <<"Adres str[1]: "<<(int)&str[1] << endl;	// 9bf979

  cout <<str[1]<<' '<< &str[1] << endl;			// 2  234567
     
  char * ps = str;					// указатель на массив
  cout<< "Source str using pointer: ";		
  cout<< ps << endl;					// 1234567
  cout<<"Adres str:   "<<(int)ps<<endl;			// 9bf978
  cout<<"Adres pointer: "<<&ps<<endl<<endl;		// 009BF960

  cout << str[1] << ' ' << ps[1] << ' ' << endl;	// 2 2
  cout<<*(str + 3)<<' '<<*(ps + 3)<<' '<<endl;		// 4 4
  cout << &str[2] << "  "<<(ps + 2)<<endl;		// 34567  34567

  str[1] = 'A';	 ps[2] = 'a';				// изменяем элементы массива
  cout << "str = " << str << endl;			// 1Aa4567
  cout << "ps = "<<ps << endl;				// 1Aa4567
  
 *(ps + 4) = '\0';					// или ps[4] = '\0';
  cout<<"ps = "<<ps<<endl;				// ps = 1Aa4
   
  cout<<(int)str[1]<<' '<<dec<<(int)str[1]<<endl; 	// 41  65

// Инициализация  массива при объявлении
  char st[] = "123456789";
  cout<<"st = "<<st<<endl;				// st = 123456789
  ps = st;
  cout <<"ps = "<<ps << endl;				// ps = 123456789
  *(ps + 5) = '\0';					// или ps[5] = '\0';
  cout<<"ps = "<<ps<<endl;				// ps = 12345
}

 