// Пример 2. Есть ли в натуральном числе n последовательность
// из k одинаковых цифр, стоящих подряд?
#include <iostream>
using namespace std;
int main(){
 int n, k;
 int fl = 0, pred, sled;
 cout <<"Enter the natural number: ";     cin >>n;
 cout<<"Enter k: ";	 cin>>k;
 int kol = 1;
 pred = n % 10; n = n / 10;
 while (n){
   sled = n % 10;  n = n / 10;
   if (pred == sled){
      kol++;
      if(kol == k){fl = 1; break;}
    }
    else kol = 1;
    pred = sled;
  }  
   
  if(fl == 1) cout<<"\nYes"<<endl; 
  else cout<<"\nNo"<<endl;
}


