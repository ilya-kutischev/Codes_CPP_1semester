// Пример 4.Вычисление n! оформить в виде функции.
# include <iostream>
using namespace std;
int fact(int); 				// прототип функции
   int main(){
   int n = 5;
   int rez = fact(n);
   cout<<"Factorial of "<<n<<" is equal to "<<rez<<endl;
 }
int fact(int n){ 			// определение функция
   int rez = 1;
   for(int i = 1; i <= n; i++)
        rez = rez * i;			// rez *= i;
   return rez;
}
