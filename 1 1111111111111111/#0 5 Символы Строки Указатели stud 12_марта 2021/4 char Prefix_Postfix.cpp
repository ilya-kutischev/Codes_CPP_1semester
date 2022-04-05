// Пример 4. Указатель на тип char и операции инкремента, 
// декремента, разыменования.
#include <iostream>
using namespace std;
int main() {
    char str[] = "1765432";
    cout <<"= "<< str << endl;            // 1765432

    char* pstr = str;              	 // указатель на массив типа char
    cout << *pstr++ << ' ';        	 // 1
    cout << *pstr++ << ' ';        	 // 7
    cout << *pstr++ << endl;       	 // 6

    pstr = str;
    cout << *++pstr << ' ';        	  // 7
    cout << *++pstr << endl;        	  // 6

    pstr = str; 
    cout << "= " << pstr << endl;          // 1765432
    cout << (*pstr)++ << ' ';              // 1
    cout << (*pstr)++ << ' ';              // 2
    cout << (*pstr)++ << ' ';              // 3
    cout << *pstr << endl;                 // 4

    pstr = str;
    cout << "= " << pstr << endl;	   // 4765432
    cout << ++(*pstr) << ' ';        	   // 5
    cout << ++(*pstr) << ' ';        	   // 6
    cout << ++(*pstr) << ' ';        	   // 7
    cout << *pstr << endl;           	   // 7
    cout << pstr << endl;           	   // 7765432

    const char* qstr = "tbc";      	   // указатель на const-строку
    cout <<"= " << qstr << endl;	   // tbc	
    cout << *qstr++ << ' ';            	   // t
    cout << *qstr++ << ' ';                // b
    cout << *qstr++ << endl;               // c
    cout << *qstr++ << endl;               // 

    qstr = "tbc";
    cout << "= " << qstr <<endl;
    cout << *++qstr << ' ';                // b
    cout << *++qstr << endl;               // c
    cout << *++qstr << endl;               //

    qstr = "1234";
 //   cout <<(*qstr)++ << endl;         // Ошибка. Указатель на константу

}
