// ������ 4.���������� n! �������� � ���� �������.
# include <iostream>
using namespace std;
int fact(int); 				// �������� �������
   int main(){
   int n = 5;
   int rez = fact(n);
   cout<<"Factorial of "<<n<<" is equal to "<<rez<<endl;
 }
int fact(int n){ 			// ����������� �������
   int rez = 1;
   for(int i = 1; i <= n; i++)
        rez = rez * i;			// rez *= i;
   return rez;
}
