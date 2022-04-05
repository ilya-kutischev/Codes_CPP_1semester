/*
 Функция strtok_s():
 сhar* strtok_s(char* str, const char* pat, char** context);
  Разделяет строку, адресуемую параметром str, на слова (токены);
  pat содержит символы-разделители в строке; context – указатель на char*,  
  используется для хранения сведений о состоянии str между вызовами функции.
   При первом вызове функция пропускает ведущие разделители и 
  возвращает указатель на первое слово в строке str, завершая слово 
  нулевым символом (NULL). Возвращает указатель на начало следующего
  слова в строке или NULL, если нет больше слов. 
   Каждый вызов strtok_s() изменяет str, вставляя символ NULL после 
  слова, возвращенного этим вызовом. Указатель context (контекста)
  следит за тем, какая строка считывается и где в строке находится 
  следующее слово (токен) для считывания. Чтобы считать следующее 
  слово из str, следует вызвать strtok_s() со значением NULL для
  аргумента str, и передать  параметр context (контекста). 
  Аргумент для str NULL заставляет strtok_s() искать следующее 
  слово (токен) в измененной str.
*/

// Пример 7. Ввести с клавиатуры строку, сформировать массив всех слов,
// входящих в строку. Определить количество слов в строке.
// Использовать в программе стандартные функции обработки строк.
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int kol = 0, lenslova, len;
	cout << "dlina stroki: ";	cin >> len;
	char* str = new char[len + 1];			// память под строку
	cin.ignore();
	cout << "Enter  stroku:";
	gets_s(str, len + 1);				// ввод строки
	cout << "str: " << str << endl;
	int buf = strlen(str);
	char** slova = new char* [buf + 1];		// массив указателей
	const char* pat = ", . ;";			// разделители слов
	char* context = NULL;
	char* word = NULL;
	word = strtok_s(str, pat, &context);		// первое слово
	while (word) {
		cout << " word: " << word << endl;
		cout << " context:  " << context << endl;
		if (word != NULL) {
			lenslova = strlen(word);
			slova[kol] = new char[lenslova + 1];
			strcpy_s(slova[kol], lenslova + 1, word);
			kol++;
			word = strtok_s(NULL, pat, &context);
		}
	}
	cout << "str: " << str << endl;
	cout << " Massiv slov: " << endl;		// вывод массива
	for (int i = 0; i < kol; i++)
		cout << slova[i] << endl;
	delete[] str;
	for (int i = 0; i < kol; i++)
		delete[] slova[i];
	delete[] slova;
}

/*
Выделение слов, используя функции strtok() и strcpy()
#define _CRT_SECURE_NO_WARNINGS
 Идентификатор препроцессора. Предназначен для служебного использования
 внутри стандартной библиотеки C++ от Visual Studio. Отключает
 дополнительную защиту от ошибок. Используется для совместимости с
 классическими функциями. Например, код работал без каких-либо замечаний 
 в версиях 2010-2013 и вдруг "не работают" в 2015. Помогало. В 2019 внрсии -- нет.
…
  int kol = 0;
  char** slova = new char* [strlen(str) + 1];
  const char* pat = ", . ;";
  char* word = NULL;
  word = strtok(str, pat);		// первое слово
  while(word != NULL) {
    if (word)
	slova[kol] = new char[strlen(word) + 1];
	strcpy(slova[kol], word);
	kol++;
	word = strtok(NULL, pat);
     }
   }
...
*/


