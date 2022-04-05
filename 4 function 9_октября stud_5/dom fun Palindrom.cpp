// Определить, является ли введённое число палиндромом.
// Использовать функцию.
# include <iostream>
using namespace std;
    int palindrom(int num);
    int main(){
     int  chislo, pr;
     cout<<"vvedi chislo: ";      cin>>chislo;
     pr = palindrom(chislo);
     if(pr == 1)   cout<<chislo<<"  --  palindrom"<<endl;
     else cout<<chislo<<"  --  no palindrom"<<endl;
     cout<<endl;
    
  }
  int palindrom(int num){
        int fl = 1, pnum, cifra, r;
        r = num;  pnum = 0;
        while(r){
           cifra = r % 10;
            pnum = pnum * 10 + cifra;
            r = r / 10;
         }
        if(num == pnum) fl=1;
        else fl=0;
        return fl;
  }