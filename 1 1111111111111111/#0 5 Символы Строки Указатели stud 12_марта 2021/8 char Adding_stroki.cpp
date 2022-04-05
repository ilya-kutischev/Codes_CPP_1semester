// Пример 8. Добавление qstr-строки к концу pstr-строки.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int n;
  cout<<"Enter max number simvolov in strokax: "; 
  cin>>n;
  cin.ignore();	
  char* qstr = new char[n+1];		// cоздание динамической строки	qstr
  char* pstr = new char[2*n+1]; 	// cоздание динамической строки	pst
  cout<<"Enter stroku pstr: ";	gets_s(pstr, n);	// 12345
  cout<<"Enter stroku qstr: ";	gets_s(qstr, n);	// 6789

  char *pt = pstr; char *ps = qstr;	// используем рабочие указатели
  while(*pt != '\0') pt++;		// находим конец строки pstr
					// в pt будет адрес символа '\0'
 // pt = pt + strlen(t);		// можно и так
  while(*pt++ = *ps++);			// добавление строки qstr
 
  cout<<"Stroka pstr = "<<pstr<<endl; 		// pstr = 123456789
  cout<<"Stroka qstr = ";  puts(qstr);		// qstr = 6789
  delete [] pstr;
  delete [] qstr;
}
