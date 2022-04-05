// Пример 6. Определить структуру, полями которой являются числитель и знаменатель
// рациональной дроби. Создать функцию для сложения двух дробей. 
// Структуры передаются  функции по значению.
// Функция возвращаетструктуру.
#include <iostream>
using namespace std;
struct Rac{
  double a;
  double b;
 };

Rac sumStruct(Rac s1, Rac s2){
  Rac t;
  t.a = (s1.a * s2.b) + (s1.b * s2.a);
  t.b = s1.b * s2.b;
  return t;
}

int main(){
 Rac st1, st2, rez;
 cout<<"Vvedi a, b for st1:  "; 
 cin>>st1.a>>st1.b;					// 1 2
 cout<<"Vvedi a, b for st1:  "; cin>>st2.a>>st2.b;	// 3 4
 rez = sumStruct(st1, st2);
 cout<<"rez = "<<rez.a<<'/'<<rez.b<<endl;		// rez = 10/8
}

