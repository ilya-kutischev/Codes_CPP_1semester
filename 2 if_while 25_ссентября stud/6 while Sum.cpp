// Пример 6. Ввести последовательность чисел до первого 
// нулевого числа и найти их сумму.
#include <iostream>
using namespace std;
 int main(){
    int num, sum; 
    cout<<" Enter  num: ";   cin>>num;
    sum = num;
    while(num){
      cout<<" Enter  num: ";	cin>>num;
      sum = sum + num;
    }
    cout<<"sum =  "<<sum<<endl;
 }
