// Пример 2. Вложенные структуры. Массивы в структурах.
// Массив структур.
#include <iostream>
using namespace std;

struct Date {					// тип Date
	int day, month, year;
};
struct Time {					// тип Time
	int hour, min, sec;
};
int main() {
	const int n = 20;
	struct DateTime {			// вложенная структура
		Date today;
		Time now;
	}dt;					// dt – переменная
	dt.today.year = 2001;			// доступ к полям
	dt.now.min = 33;			// вложенной структуры
	cout << dt.today.year << "  " << dt.now.min << endl; 	// 2001  33
  // Массивы в структурах
	struct Array {				// поля структуры – массивы
		int matr[2][3];
		float fl[3];
		char fio[n];
	}ar;
	ar.matr[0][0] = 25;			// доступ к полям 
	ar.fl[2] = 5.5;		ar.fio[0] = '*';
	cout << ar.matr[0][0] << ' ' << ar.fl[2] << ' ' << ar.fio[0] << endl; 	// 2001  33
  // Массив  структур
	struct Person {				//  тип Person
		char fam[n];
		Date birthday;
		long telNumber;
	};
	Date list[10];				// массив структур list типа Date
	Person per[n]; 				// массив структур per типа Person
	Array mas[n]; 				// массив структур mas типа Array
	list[1].day = 25;
  //	list.day[1] = 25;			// нельзя!!!!
	per[1].birthday.day = 5;
	mas[0].matr[0][1] = 25;		mas[1].fl[0] = 15.5;
	cout << list[1].day << ' ' << per[1].birthday.day << endl;	// 25 5
	cout << mas[0].matr[0][1] << ' ' << mas[1].fl[0] << endl; 	// 25 15.5
}
