// Пример 3. Цикл типа do – while. Вычислить значение  f = n!.
#include <iostream>
using namespace std;
int main(){
   int fact = 1;    int n, i = 1;
   cout<<"Vvedi n > 0:  " ;	cin>>n;
   do{
     fact = fact * i;	i++;
   }while(i <= n);
   cout<<"fact = "<<fact<<'\n';
}
