// Пример 9. Вводится последовательность из натуральных чисел.
// Найти и вывести  cyммy простыx чисeл.
// В данном алгоритме единица не учитывается.
#include <iostream>
using namespace std;
int prostoe(int x){
 int k = x/2;    int fl = 1;
 for(int i = 2; i <= k; i++){
    if(x % i == 0){fl = 0; break;}
 }
 return fl;
}
 int main(){
   int i, n,  chislo, sum = 0;
   int fl;
   cout<<"Vvedi n ";  cin>>n;
   for(i=1;i <= n; i++){
      cout<<"Vvedi chislo ";  cin>>chislo;
      fl = prostoe(chislo);
      if(fl == 1) sum = sum + chislo; 
   //  if(prostoe(chislo) ) sum = sum + chislo;
   }
   cout<<" sum = "<<sum<<endl;
 }