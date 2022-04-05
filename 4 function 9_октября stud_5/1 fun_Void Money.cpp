// Пример 1. Использование функции. Программа для обменного пункта.
#include <iostream>
using namespace std;
void obmen(double kurs, double sum);		// прототип функции
int main() {
	double kurs = 2.14;
	double sum = 2000;
	obmen(kurs, sum);
	obmen(2.14, 2000);
}
void obmen(double kurs, double sum) {
	double result = sum / kurs;
	cout << "Kurs: " << kurs << "\tSum: " << sum
		<< "\tResult: " << result << endl;
}
