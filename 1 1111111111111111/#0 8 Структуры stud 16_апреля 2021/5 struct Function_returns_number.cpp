// Пример 5. Определить структуру, полями которой являются 
// числитель и знаменатель рациональной дроби. Создать функцию
// для сложения двух дробей. Функция возвращает число.
// Структуры передаются  функции по значению.
#include <iostream>
using namespace std;
struct Rac{
  double a;
  double b;
 };
double sumStruct(Rac s1, Rac s2){
  double z;
  z = ((s1.a * s2.b) + (s1.b * s2.a)) / (s1.b * s2.b);
  return z;
}

 int main(){
   Rac st1, st2;
   cout<<"Vvedi a, b for st1:  ";
   cin>>st1.a>>st1.b;				// 1 2
   cout<<"Vvedi a, b for st1:  ";
   cin>>st2.a>>st2.b;				// 3 4
   double rez = sumStruct(st1, st2);
   cout<<"rez = "<<rez<<endl;			// rez = 1.25
 }

