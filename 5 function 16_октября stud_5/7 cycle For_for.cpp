// Пример 7. Вывод на экран пяти строк с цифрами от 0 до 9.
#include <iostream>
using namespace std;
int main() {
  int i, j;
  for (i = 0; i < 5; i++) {
     for (j = 0; j < 10; j++)
	cout << j << ' ';
	cout << endl;
     }
}
