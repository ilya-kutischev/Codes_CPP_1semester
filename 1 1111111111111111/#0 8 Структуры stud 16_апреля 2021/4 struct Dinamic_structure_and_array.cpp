// Пример 4. Динамические структуры и массивы структур.
#include <iostream>
#include <cstring>
using namespace std;
struct Rab {				// тип Rab
  int* px;
  char* ps;
  int y;
};
struct Mas {				// тип Mas
  int* px;
  int y;
};
const int buf = 20;
int main() {
// Динамические структуры
	Rab st;
	int z;
	Rab* ptr = new Rab;		// указателю ptr присваивается адрес структуры
	ptr->y = 888;
	ptr->px = &z;
	*ptr->px = 666;			// или *((*ptr).px) = 666;
	ptr->ps = new char[buf];
	strcpy_s(ptr->ps, buf, "AAAAA");
	cout << ptr->y << ' ' << *ptr->px << ' ' << z << endl;		// 888 666 666
	cout << ptr->ps << ' ' << *ptr->ps << endl;			// AAAA   A
	delete [] ptr->ps;
	delete ptr;
// Динамический массив структур
	Mas* q = new Mas[3];		// динамический массив структур
	for (int i = 0; i < 3; i++) {
	  q[i].y = 7;			// 7 5 5
	  q[i].px = &z;			// 7 5 5
	  *q[i].px = 5;			// 7 5 5
       	  cout << q[i].y << ' ' << *q[i].px << ' ' << z << endl;
         }
	  for (int i = 0; i < 3; i++) {
	   (q+i)->y = 7;		// 7 5 5
	   (q + i)->px = &z;		// 7 5 5
	   *(q+i)->px = 5;		// 7 5 5
	   cout << (q + i)->y << ' ' << *(q + i)->px << ' ' << z << endl;
	  }
	delete[] q;
}
