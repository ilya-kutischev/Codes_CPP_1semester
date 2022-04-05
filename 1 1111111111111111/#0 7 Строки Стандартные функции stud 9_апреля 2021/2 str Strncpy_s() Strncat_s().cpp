// Пример 2. Использование стандартных функций strncpy_s(), 
// strncat_s(), strchr(), strrchr(), strcmp(), strncmp() в программе.
/* 
 Функция strncpy_s():
  сhar* strncpy_s(char* str1, int buf, char* str2, int size);
   Копирует заданное количество символов строки str2 в строку str1. 
   Функция работает аналогично функции strcpy_s(), но копирует
   не более size символов. Отличие – не обязательно копирует 
   завершающий нулевой символ строки str2.
 Функция strncat_s():
  char* strncat_s(char* str1, int buf, char* str2, int size);
   Добавляет к строке str1 заданное количество символов строки str2.
   Функция работает аналогично функции strcat_s().
 Функция strchr():
  char* strchr(char* str, char simv);
   Выполняет поиск символа simv в строке str. Функция возвращает
   адрес символа в строке или NULL, если символ не найден.
 Функция strrchr():
  char* strrchr(char* str, char simv);
   Определяет адрес последнего вхождения символа simv в строке str,
   работает аналогично функции strchr().
 Функция strcmp():
  int strcmp(char* str1, char* str2);
   Сравнивает строки str1 и str2 (сравниваются коды символов).
   Функция возвращает целое число, равное нулю, если строки равны,
   меньше нуля, если строка str1 меньше строки str2 и больше нуля,
   если строка str1 больше строки str2.
 Функция strncmp():
  int strncmp(char* str1, char* str2, int size);
   Функция сравнивает заданное количество символов строк str1 и str2.
   Функция работает аналогично функции strcmp(), но сравниваются size
   символов.
*/
#include <iostream>
#include <cstring>
using namespace std;
const int buf = 80;
int main() {
	int  n;
	cout << "Enter max chislo simvolov v stroke == 80: ";
	cin >> n;						// 80
	char* str = new char[n + 1];			// выделение памяти для str
	strncpy_s(str, buf, "*****", 3);		// копирование "***" в str
	cout << "str = " << str << endl;		// ***
	//----------------------------------------------------------------------------------
	strncat_s(str, buf, "55555", 3);
	cout << "str = " << str << endl;		// ***555
	//------------------------------------------------------------------------------------
	char* str1 = new char[n + 1];
	strcpy_s(str1, n, "11 + 22 + 33");
	char* p;
	p = strchr(str1, '+');			// p указывает на подстроку "+ 22"
	cout << p << endl;			// + 22 +33
	p = strrchr(str1, '+');			// p указывает на подстроку "+ 33"
	cout << p << endl;			// + 33
	//------------------------------------------------------------------------------------
	char* str2 = new char[n + 1];
	strcpy_s(str2, buf, "abc");			// str2 = abc
	char* str3 = new char[n + 1];
	strcpy_s(str3, buf, "abc");			// str3 = abc
	cout << strcmp(str2, str3) << endl;		// 0
}

