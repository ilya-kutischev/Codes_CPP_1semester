//Пример 7. Проверить, является ли натуральное число простым.
#include <iostream>
using namespace std;
int main(){
 int n, i = 2, pr = 1;
 do{
  cout<<" vvedi n: ";  cin>>n;
 }while (n == 0 || n < 0);
 cout<<"n = "<<n<<endl;
int k = n / 2;
 while(i <= k){
    if(!(n % i )){  pr = 0;     break; }
    i++;
 }
 if (pr == 1) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
}
