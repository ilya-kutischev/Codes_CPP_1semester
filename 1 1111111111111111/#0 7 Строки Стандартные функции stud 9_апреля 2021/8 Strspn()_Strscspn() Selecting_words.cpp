// Пример 8. В строке найти количество слов, у которых первый 
// и последний символы cовпадают.
// Использование функций strspn(),strсspn().
/*
   Функция strspn() находит начало слова, поиск осуществляется, 
   начиная с текущего адреса в строке.
   Функция strsсpn() находит конец слова.
*/
#include <iostream>
using namespace std;
#include <cstring>
// #define _CRT_SECURE_NO_WARNINGS
int main() {
	int n;
	cout << "Enter max chislo simvolov v stroke:";	  cin >> n;
	char* pstr = new char[n + 1];		// выделение памяти для строки
	const char pat[] = " ,.;:()";		// символы-разделители
	char* p = pstr, sn, sk;
	int k = 0;
	cout << "Enter stroku: ";
	cin.ignore();
	gets_s(pstr, n + 1);
	cout << "pstr: ";   puts(pstr);	cout << endl;
	do {
		p = p + strspn(p, pat);			// в p – адрес начала слова
		sn = *p;				// первый символ слова
		p = p + strcspn(p, pat);		//адрес первого разделителя, т.е. адрес 
				// символа, следующего после последнего символа слова
		sk = *(p - 1);				// последний символ слова
		if (sn == sk) k++;			// сравниваем символы
	} while (*p);					// пока не найден конец строки
	cout << "k = " << k << endl;
	cout << "pstr:  " << pstr << endl;
	cout << "p: " << p << endl;
	delete [] pstr;
}
 