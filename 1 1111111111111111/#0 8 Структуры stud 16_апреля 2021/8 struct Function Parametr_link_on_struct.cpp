// ������ 8. ���������� ���������, ������ ������� �������� ��������� � �����������
// ������������	 �����. ������� ������� ��� �������� ����  ������.
// ��������� ������������ ����� ��������-������ �� ���������.
/* ������ �� ���������. ��� ��������, ��� � ��� ������� ����������,
   ����� ��-���������� ��������� ���. ��������:
   struct Rac{
     int a; int b;
   }st;
   Rac & rst = st;
   ����� ������ ���������� st � rst � ��� ��� �������a ����� � ��� ��
   ���������� ������������ ���� Rac. �������, ���� �������� ���� x 
   ��� y ��������� st, �� ��������� ��������������� ���� ��������� rst.
*/
#include <iostream>
using namespace std;
struct Rac{
  double a;
  double b;
};
void sum(Rac s1, Rac s2, Rac &s3){
  s3.a = (s1.a * s2.b) + (s1.b * s2.a);
  s3.b = s1.b * s2.b;
}
int main(){
 Rac st1, st2, rez;
 cout<<"Vvedi a, b for st1:  ";
 cin>>st1.a>>st1.b;	  				 // 1 2
  cout<<"Vvedi a, b for st1:  ";
 cin>>st2.a>>st2.b;	 				 // 3 4
 sum(st1, st2, rez);
 cout<<"rez = "<<rez.a<<'/'<<rez.b<<endl;		// rez = 10/8
}

