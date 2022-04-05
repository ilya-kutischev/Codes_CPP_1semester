// Пример 7. Определить структуру, полями которой являются числитель и знаменатель
// рациональной дроби. Создать функцию для сложения двух  дробей.
// Результат возвращается через параметр-указатель на структуру s3.
#include <iostream>
using namespace std;
struct Rac{
  double a;
  double b;
 };
void sumStruct(Rac s1, Rac s2, Rac* s3){

//  (*s3).a = (s1.a * s2.b) + (s1.b * s2.a);
//  (*s3).b = s1.b * s2.b;
  s3->a = (s1.a * s2.b) + (s1.b * s2.a);
  s3->b = s1.b * s2.b;
}

int main(){
 Rac st1, st2, rez;
 cout<<"Vvedi a, b for st1:  ";
 cin>>st1.a>>st1.b; 	 				 // 1 2
 cout<<"Vvedi a, b for st1: "; 
 cin>>st2.a>>st2.b;	 				 // 3 4
 sumStruct(st1, st2, &rez);
 cout<<"rez = "<<rez.a<<'/'<<rez.b<<endl;		// rez = 10/8
}

