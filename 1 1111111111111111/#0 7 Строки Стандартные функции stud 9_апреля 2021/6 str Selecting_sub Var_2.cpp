// Пример 6. Выделение sub в строке. Вариант_2.
#include <iostream>
#include <cstring>
using namespace std;
char* subVid(char* s, int, int);
int main(){
	int n;
	cout << "Enter max-number simvolov in string: ";
	cin >> n;
	char* str = new char[n + 1];
	cin.ignore();
	cout << "Enter stroku :";
	gets_s(str, n + 1);
	cout << "main str:  " << str << endl;
	char* sub = subVid(str, 3, 4);
	cout << "main sub:  " << sub << endl;
	cout << "main str:  " << str << endl;
	delete [] sub;
}
char* subVid(char* s, int nach, int kol) {
	cout << "subVid s: " << s << endl;
	int buf = strlen(s) + 1;
	cout << " buf = " << buf << endl;
	char* sub = new char[buf];
	strncpy_s(sub, buf, s + nach, kol);
	cout << " sub: " << sub << endl;
	return sub;
}
