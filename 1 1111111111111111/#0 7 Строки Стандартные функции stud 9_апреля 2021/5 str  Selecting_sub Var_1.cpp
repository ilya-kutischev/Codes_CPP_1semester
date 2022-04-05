// Пример 5. Выделение подстроки в строке. Вариант первый.
#include <iostream>
#include <cstring>
using namespace std;
void subVid(char*, char*, int, int);		
int main() {
	int n;
	cout << "Enter max-number simvolov in string: ";
	cin >> n;
	char* str = new char[n + 1];
	char* sub = new char[n + 1];
	cin.ignore();
	cout << "Enter stroku :";
	gets_s(str, n+1);
	cout << "main str: " << str << endl;
	subVid(str, sub, 3, 4);		// с str[3] символа, выделили 4 символа
	cout << "main sub: " << sub << endl;
	cout << "main str: " << str << endl;
	delete [] str;
	delete [] sub;
}
void subVid(char* s, char* sub, int nach, int kol) {
	cout << "subVid s: " << s << endl;
	int buf = strlen(s) + 1;
	cout << " buf = " << buf << endl;
	strncpy_s(sub, buf, s + nach, kol);
	cout << " sub: " << sub << endl;
}
