/*����������, ������������ �� ����� �������� ������ ������������ ����� n
������������ ������������������ ����� � ������, � ������
��������������� ���������. ������ ���� �� ���������.*/
//2805 ��������, 102 ��������, 8 - ��������
#include <ctime>
#include <iostream>
using namespace std;
class Cifra {				// ����������� ������ Cifra
	int num;				// �����
	bool fl = 0;
public:
	Cifra(long n) { num = n; }	// ����������� � ����������
	void isBinNumSymmetric(int num);
	long get_num() { return num; }
};



void Cifra::isBinNumSymmetric(int num) {
	unsigned t = 0;
	while (!(num & 1)) {
		num = num >> 1;
	}
	for (unsigned bit = 1; bit && bit <= num; bit <<= 1)
		t = (t << 1) | !!(num & bit);
	if (t == num)fl = 1;
	else fl = 0;

	string out;
	if (fl) { out = " "; }
	else out = " ne ";
	cout << "Chislo" << out << "yavlaetsa simmetrichnoi posledovatelnostiu v dvoichnoi SI" << endl;
}
int main() {
	int n;
	cout << "vvedi chislo: ";	cin >> n;
	Cifra ob2(n);
	ob2.isBinNumSymmetric(ob2.get_num());
}
