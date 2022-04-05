// Пример 7. Проанализировать значение переменной mark, которая является
// значением выставленной оценки.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");		// setlocale(LC_ALL, "russian");
	int mark;
	cout << "Введите оценку: ";		cin >> mark;
	switch (mark) {
	  case 5:   cout << "оценка отлично \n"; break;
	  case 4:   cout << " оценка хорошо\n";	 break;
	  case 3:   cout << " оценка  три\n";	 break;
	  default:  cout << "Неверное значение\n";
	}
}

