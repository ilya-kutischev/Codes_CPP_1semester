// Пример 1. Использование стандартных функций strcpy_s(), strcat_s()
// в программе.
/*
 Функция strcpy_s():
  сhar* strcpy_s(char* str1, int buf, char* str2);
   Копирует строку str2 в строку str1, buf – промежуточный буфер.
   Функция возвращает указатель (адрес) на str1. Третий аргумент 
   str2 может быть константой, первый аргумент str1 обязательно 
   должен быть адресом строки.
 Функция strcat_s():
  char* strcat_s(char* str1, int buf, char* str2);
   Добавляет строку str2 к строке str1, buf – промежуточный буфер.
   Функция возвращает указатель (адрес) на начало сформированной 
   строки str1. Первый символ (с индексом 0) строки str2 записывается 
   поверх символа '\0' строки str1. Третий аргумент str2 может быть 
   константой, первый аргумент str1 обязательно должен быть адресом 
   строки.
*/
#include <iostream>
#include <cstring>
using namespace std;
const int buf = 80;
int main(){
   int  n;
   cout<<"Enter max chislo simvolov v stroke (ravno razmeru buf) : ";
   cin>>n;					// ввести 80  (как размер буфера)!!!
   char * str = new char[n+1];			// выделение памяти для str
   strcpy_s(str, buf, "*****");			// копирование "*****" в str
   cout << "str = " << str << endl;		// *****
   char * str1 = new char[n+1];			// выделение памяти для str1
   strcpy_s(str1, buf, "55555");
   cout << "str1 = " << str1 << endl;		// 55555
   strcpy_s(str, buf, str1);
   cout << "str = " << str << endl;		// 55555
   char str2[] = "77777";
   cout << "str2 = " << str2 << endl;		// 77777
   strcpy_s(str, buf, str2);
   cout << "str = " << str << endl;		// 77777
   char str3[buf];
   cin.ignore();
   cout<<"Enter stroku:  ";
   gets_s(str3);				// SSSSS
   int len = strlen(str3)+1;
   char* str4 = new char[len];
   strcpy_s(str4, len, str3);
   cout << "str4 = " << str4 << endl;		// SSSSS
   strcat_s(str, buf, str4);
   cout << "str = " << str << endl;		// 777777SSSSS
}
