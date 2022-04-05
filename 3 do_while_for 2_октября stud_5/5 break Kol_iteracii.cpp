// Пример 5. Использование оператора  break. Подсчёт количества
// итераций цикла.
#include <iostream>
using namespace std;
int main() {
	int count(0); 		// количество итераций цикла
	char simv;
	while (true) { 		// бесконечный цикл 
	    cout << "Enter to exit simvol n \n"
		    "Enter other simvol to continue: ";
		cin >> simv;
		if (simv == 'n') break;
		++count;
	}
	cout << "iterated = " << count << " times\n";
}
