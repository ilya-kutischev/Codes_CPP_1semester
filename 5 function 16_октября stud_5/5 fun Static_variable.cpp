// Пример 5. Использование в функции статической переменной.
#include <iostream>
using namespace std;
void display();
int main() {
  display();
  display();
  display();
}
void display() {
   static int k = 0;
   k++;
   cout << "k=" << k << endl;
}