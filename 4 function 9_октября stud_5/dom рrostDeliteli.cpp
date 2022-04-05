#include <iostream>
using namespace std;
int main(){
  int n, i, r;
  do{
    cout<<" vvedi n "<<endl;  cin>>n;
  }while(n == 0 || n < 0);
 cout<<"n= "<<n<<endl;
 int k = n / 2;
 for(i = 2; i <= k;){
   if(n % i == 0)  {
       cout<<i<<' ';    n = n / i;
   }
   else i++;
 }
 cout<<endl;
}
