// Файл может быть сохранён с любым именем, например, main().cpp
#pragma once
#include <iostream>
using namespace std;
#include "decl.h"

Cifra::Cifra(long x) {			// конструктор
    n = x;
}
void Cifra::summa() {			// функция summa()
    sum = 0;
    long rab = n;
    while (rab) {
        sum = sum + rab % 10;	
        rab /= 10;	
    }
}
void Cifra::show() {			// функция show()
    cout << " summa cifr chicla  = " << sum << endl;
}
int main() {				 // функция main()
    long n, m, i;
    cout << "vvedi chislo: ";    cin >> n;
        Cifra ob(n); 			// создание объекта ob 
        ob.summa();
        ob.show();
}
