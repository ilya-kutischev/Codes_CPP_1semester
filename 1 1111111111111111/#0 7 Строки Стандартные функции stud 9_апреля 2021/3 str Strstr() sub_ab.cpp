#include <iostream>
// Пример 3. Определить, сколько раз заданная подстрока
// встречается в строке. Использование функции strstr().
/*
 Функция strstr() :
  char* strstr(char* str, char* sub);
   Поиск строки sub в строке str.Функция возвращает адрес первого
   вхождения подстроки sub в строке str.Причём поиск осуществляется, 
   начиная с текущего адреса в строке.Если подстрока не найдена, 
   то функция возвращает NULL.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int k = 0, n, len;
	cout << " Vvedi  max dlinu stroki  n: ";
	cin >> n;
	char* str = new char[n + 1];
	cout << "Vvedi stroku :";
	cin.ignore();
	gets_s(str, n + 1);
	const char* sub = "ab";			// подстроку можно и ввести
	len = strlen(sub);			// длина  sub
	char* q, * p = str;
	while (1) {
		q = strstr(p, sub);		// нахождение адреса подстроки sub
		if (q != 0) k++; else break;
		p = q + len;			// р будет указывать на символ,
						// след. после найденной подстроки
	}
	cout << "k = " << k << endl;
	delete[] str;
}


