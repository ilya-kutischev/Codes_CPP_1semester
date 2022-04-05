// Пример 1. Ввести последовательность из n. 
// Найти первое отрицательное число или
// выдать сообщение "No", если нет отрицательного числа
#include <iostream>
using namespace std;
 int main(){
    int n, num;
    bool fl = 0; 
    cout << "Enter n:  ";  cin >> n;
    for(int i = 1; i <= n; i++)
    { 
      cout<<"Enter  chislo: ";  cin>>num;
      if(num < 0){fl = 1; break;}
    }
    if(fl)cout<<"num =  "<<num<<endl;
    else
      cout<<"No"<<endl;
 }
