// ������ 8. ���������� qstr-������ � ����� pstr-������.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int n;
  cout<<"Enter max number simvolov in strokax: "; 
  cin>>n;
  cin.ignore();	
  char* qstr = new char[n+1];		// c������� ������������ ������	qstr
  char* pstr = new char[2*n+1]; 	// c������� ������������ ������	pst
  cout<<"Enter stroku pstr: ";	gets_s(pstr, n);	// 12345
  cout<<"Enter stroku qstr: ";	gets_s(qstr, n);	// 6789

  char *pt = pstr; char *ps = qstr;	// ���������� ������� ���������
  while(*pt != '\0') pt++;		// ������� ����� ������ pstr
					// � pt ����� ����� ������� '\0'
 // pt = pt + strlen(t);		// ����� � ���
  while(*pt++ = *ps++);			// ���������� ������ qstr
 
  cout<<"Stroka pstr = "<<pstr<<endl; 		// pstr = 123456789
  cout<<"Stroka qstr = ";  puts(qstr);		// qstr = 6789
  delete [] pstr;
  delete [] qstr;
}
