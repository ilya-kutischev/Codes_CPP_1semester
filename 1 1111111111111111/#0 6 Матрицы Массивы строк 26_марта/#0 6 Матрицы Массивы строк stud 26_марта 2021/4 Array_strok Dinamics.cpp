
// ������ 4. ����-����� ������, ������� ����� (������������).
// ������������ �����.
#include <iostream>
using namespace std;
int main(){
  int n,m;
// ������������ ���������� ������ char
  cout<<"Enter m-chislo simvolov in stroke:";  cin>>m;
  char* pstr1 = new char [m+1];   	 // ��������� ������ ��� ������

  cin.ignore();
  cout<<"Enter text up_to "<< m<<" simvolov:";
  gets_s(pstr1, m+1);
  cout<<"Stroka: "<<pstr1<<endl;

  delete [] pstr1;            		   // ������������ ������,���������� �������

// ������������ ��������� ������ char
  cout<<"Vvedi n-chislo strok:";  cin>>n;
  char ** pstr2 = new char*[n];   		 // ��������� ������ ��� ��������� �� ������

  cout<<"Enter m-chislo simvolov in strokax: ";  cin>>m;
  cin.ignore();

  cout<<"Enter " << n << " stroki up_to "<< m<<" simvolov:\n";
  for(int i = 0; i < n; i++){
    pstr2[i] = new char[m+1];   		  // ��������� ������ ��� i-�� ������ ������
    gets_s(pstr2[i], m+1);
  }
// ����� ������� �����
  cout<<"Massiv strok: \n";
  for(int i = 0; i < n; i++)
    cout<<pstr2[i]<<endl;

// ������������ 0 � 1-�� ����� ������
  char * point = pstr2[0];
  pstr2[0] = pstr2[1];
  pstr2[1] = point;

// ����� ������� �����
   cout << "Massiv strok after exchange:\n";
   for(int i = 0; i < n; i++)
    cout<<pstr2[i]<<endl;

// ������������ ������, ���������� �������� �����
  for(int i = 0; i < n; i++)
     delete [] pstr2[i];        		// �����.������,���������� i-�� �������
  delete [] pstr2;                		// �����.������,���������� ������. �� ������
}

