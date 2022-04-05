// Пример 7. Составить функцию poisk() для определения,
// есть ли в  строке заданный символ.

#include <iostream>
#include <cstring>
using namespace std;

int poisk(char*, char);
int main(){
  char* pstr, simv;
  int ptr, n;
  cout<<"Enter max number simvolov in stroke: ";
  cin>>n;
  pstr = new char[n+1];
  cin.ignore();					
  cout<<"Enter stroku: ";   gets_s(pstr, n+1);	// asdfgh
  cout << "stroka: " << pstr << endl;
  cout<<"Enter simvol:";    cin>>simv;		// f
  ptr = poisk(pstr, simv);
  if(ptr) cout<<"Yes"<<endl;			// Yes
  else cout<<"No simvola"<<endl;
  delete [] pstr;
}

int poisk(char* p, char c){			// функция poisk()
  int flag = 0;
  while (*p)
     if((*p++) == c){flag = 1; break;}
  return flag;
}
