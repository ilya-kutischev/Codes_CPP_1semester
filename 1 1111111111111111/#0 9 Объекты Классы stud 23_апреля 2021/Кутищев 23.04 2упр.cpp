/*ќпределить, представл€ет ли собой двоична€ запись натурального числа n
симметричную последовательность нулей и единиц, и выдать
соответствующее сообщение. ћассив цифр не создавать.*/
#include <ctime>
#include <iostream>
using namespace std;
class Cifra {				// определение класса Cifra
	long num;				// число
	long bin;
	bool fl = 0;
public:
	Cifra(long n) { num = n; bin = dec2bin(n); }	// конструктор с параметром
	Cifra();
	long dec2bin(long);
	void isBinNumSymmetric(long num);
	long get_bin() { return bin; }
};


Cifra::Cifra() {					// конструктор по умолчанию
	srand(time(NULL));
	num = rand() % 1000;
}

long Cifra::dec2bin(long num) {
	long bin = 0, k = 1;

	while (num)
	{
		bin += (num % 2) * k;
		k *= 10;
		num /= 2;
	}

	return bin;
}
void Cifra::isBinNumSymmetric(long bin) {
	long num1 = bin;
	long reverse = 0;
	while (num1) {
		reverse *= 10;
		reverse += num1 % 10;
		num1 = num1 / 10;
	}
	bool fl = 0;
	if (bin == reverse) fl = 1;

	string out;
	if (fl) { out = " "; }
	else out = "ne";
	cout << "Chislo v 2 SI= " << bin << "  " << out << " yavlaetsa simmetrichnoi posledovatelnostiu v dvoichnoi SI" << endl;
}
int main() {
	int n;
	cout << "vvedi chislo: ";	cin >> n;
	Cifra ob2(n);
	ob2.isBinNumSymmetric(ob2.get_bin());
}
