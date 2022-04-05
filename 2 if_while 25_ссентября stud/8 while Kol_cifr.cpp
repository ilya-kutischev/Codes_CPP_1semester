// Пример 8. Определить количество цифр в натуральном  числе n.
#include <iostream>
using namespace std;
int main() {
	long num;
	cout << " Enter  num: ";	cin >> num;
	cout << " num = " << num << endl;
	int k = 0;
	while (num) { k++;	num = num / 10; }
	cout << "k =  " << k << endl;
}
