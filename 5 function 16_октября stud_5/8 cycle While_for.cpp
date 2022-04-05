// Пример 8. Вычислить  для каждого числа, вводимого с клавиатуры,
// его факториал. Построить диалог при вводе чисел.
#include <iostream>
using namespace std;
int main(){
 int n;
 char flag = 'y';
 while(flag == 'y') {
   do{
	cout << "Enter number: ";  cin >> n;
   }while (n < 0 || n == 0);
   int k = 1;
   for (int i = 2; i <= n; i++)
	k = k * i;
   cout << "Factorial chisla " << n << " = " << k << endl;
   cout << " Continue? (y/n)\n";	cin >> flag;
 }
}
