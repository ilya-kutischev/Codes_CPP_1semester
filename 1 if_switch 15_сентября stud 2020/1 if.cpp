// ������ 1. ������������� ��������� if. ����� ������������ ���������� a � b
// � ������, ���� a > 0 � b > 0 ������������. ����� ����� �� �����.
#include <iostream>
using namespace std;
int main(){
  int a, b, rez;
  cout << "Enter the number a, b: ";		cin>>a>>b;
  cout<<" a = "<<a<<"  b = "<<b<<endl;
  if(a > 0 && b > 0){
    rez = a * b;	cout<<a<<" * "<<b <<" = "<<rez<<endl;
  }
  else{rez = a + b;	cout<<a<<" + "<<b<<" = "<<rez<<endl;}
}
