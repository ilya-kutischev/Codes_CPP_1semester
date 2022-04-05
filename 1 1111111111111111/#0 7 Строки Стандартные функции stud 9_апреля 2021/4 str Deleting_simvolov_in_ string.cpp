// Пример 4. Удаление символов в строке.
#include <iostream>
#include <cstring>
using namespace std;

void subDel(char*, int, int);
int main(){
  int n;
  cout<<"Enter max-number simvolov in string: ";
  cin>>n;
  char* str = new char[n+1];
  cin.ignore();
  cout<<"Enter stroku: ";
  gets_s(str, n+1);
  cout << "main: str = " << str << endl;
  subDel(str, 3, 4);	// начиная с str[3] символа, удалить 4 символa
  cout<<"main: str = "<<str<<endl;
  delete [] str;
}
void subDel(char* s, int nach, int kol){
  cout << "subDel  s: " << s << endl;
  int buf = strlen(s)+1;
  cout << " buf = " << buf << endl;
  char* temp = new char[buf];
  strcpy_s(temp, buf, s + nach + kol);
  cout << " temp: " << temp << endl;
  s[nach] = '\0';
  cout << " s: " << s << endl;
  strcat_s(s, buf, temp);
  cout << " s: " << s << endl;
}
