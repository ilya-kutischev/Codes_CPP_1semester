// ������ 3. �������� ������ ������������� �������  �������.
#include<iostream>
using namespace std;

void fun(int*, int);
int main(){
   int n;
   cout<<"Enter n -- number elements in array: ";
   cin>>n;
   int *ptr = new int[n];                //�������� ������������� �������
   for(int i = 0; i < n; i++)
      *(ptr+i) = i;
   cout<<"main:   &ptr =  "<<&ptr<<" ptr =  "<<ptr<<endl;
   cout<<"main:   massiv== "<<endl; 
   for(int i = 0; i < n; i++)
       cout<<*(ptr+i)<<' ';
   cout<<endl;
   fun(ptr, n);				// ����� ������� fun()
   cout<<"main:   &ptr =  "<<&ptr<<" ptr =  "<<ptr<<endl;
   cout<<"main:   massiv== "<<endl; 
   for(int i = 0; i < n; i++)
     cout<<*(ptr+i)<<' ';
   cout<<endl;
   delete [] ptr;
 }

void fun(int* p, int n){
    cout<<" fun:   &p = "<<&p<<" p = "<<p<<endl;
    cout<<" fun:   massiv=="<<endl; cout<<'\t';
    for(int i = 0; i < n; i++){		// � ������� ������ ����������
      *(p+i) = i*3;
      cout<<*(p+i)<<' ';
    }
    cout<<endl;
}
