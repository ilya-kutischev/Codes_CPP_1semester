// ������ 2. �������  ������������  ������� ��������� 
// ������ ���������� �� �������. ����������� ������� 1 � 2 �������. 
// ��������, ������ �������:
// 1 2 3
// 1 2 3
// n = 2; m = 3; 
// ������������ ���� ������ �� �������, �� ��������.
#include <iostream>
using namespace std;
int main(){
  int n, m;
  int** ptr;
  cout<<"Enter n, m: "; cin>>n>>m;
  ptr = new int* [m];                	// ������ ��� ������ ���������� �� �������
  for(int j = 0; j < m; j++){
    ptr[j] = new int[n];                // ������ ��� j-�� �������
  }

cout<<"Enter matrix po strokam:"<<endl;
for(int i = 0; i < n; i++)		    // ���� �� �������
  for(int j = 0; j < m;j++)                 // ���������� i-�� ������
    cin>>*(ptr[j] + i);

 /* cout<<"Enter matrix po stolbcam:"<<endl;
  for(int j = 0; j < m; j++)                // ���� �� ��������
    for(int i = 0; i < n; i++)              // ���������� j-�� �������
      cin>>*(ptr[j] + i);
  }*/
    
// ����� �� �������
  for (int i = 0; i < n; i++){              
     for (int j = 0; j < m; j++){
           cout.width(4);
           cout <<*(ptr[j] + i)<<' ';       // ��� ��� ������ ���������� �� �������

      }
      cout<<endl;   
  }
    int* p = ptr[0];			   // ������������ 0 � 1 ��������
    ptr[0] = ptr[1];
    ptr[1] = p;

  cout << " Matrix after exchange" << endl;
  for (int i = 0; i < n; i++){              
     for (int j = 0; j < m; j++){
           cout.width(4);
           cout <<*(ptr[j] + i)<<' ';       // ��� ��� ������ ���������� �� �������

      }
      cout<<endl;   
  }
// ����� �������� �� ������� 
/*  for(int j = 0; j < m; j++){              
      for(int i = 0; i < n; i++){
           cout.width(4);     
	   cout <<ptr[j][i]<<' ';
      }
      cout<<endl;   
    }
*/ 
  
 }

