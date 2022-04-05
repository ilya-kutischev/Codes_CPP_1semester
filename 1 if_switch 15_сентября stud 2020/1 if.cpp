// Пример 1. Использование оператора if. Найти произведение переменных a и b
// в случае, если a > 0 и b > 0 одновременно. Иначе найти их сумму.
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
