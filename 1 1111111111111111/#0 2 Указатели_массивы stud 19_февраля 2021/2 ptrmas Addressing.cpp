// Пример 2. Адресация элементов одномерного массива mas.
#include <iostream>
using namespace std;

const int DIM = 20;
int main(){
	int mas[DIM];				// массив целых чисел
	int n;					
	cout << "Enter size array -- n: ";
	cin >> n;				// 5
	int* ptr = mas;				// ptr – указатель на массив mas
	for(int i = 0; i < n; i++)		// 0 1 2 3 4 
	   mas[i] = i;				// используется имя массива и индекс
	cout << endl;

	for(int i = 0; i < n - 1; i++)
	   cout << "***" << mas[++i] << ' ';	// ***1 ***3 !!!!
	cout << endl;
	for(int i = 0; i < n - 1; i++)
	   cout << "***" << mas[i++] << ' ';	// ***0 ***2 !!!!
	cout << endl;

	for(int i = 0; i < n; i++)		// используется операция
	   cout << *(mas + i) << ' ';		// разыменования – 0 1 2 3 4
	cout << endl;
	
	for(int i = 0; i < n; i++)		// используется указатель и индекс,
	   ptr[i] = 8 - i;			// 8 7 6 5 4
	for(int i = 0; i < n; i++)		// используется постфиксный ++
	   cout << *ptr++ << ' ';		// указателя ptr: 8 7 6 5 4
	cout << endl;

	ptr = mas;				// ptr – указатель на массив mas
	for(int i = 0; i < n; i++)		// использутся префиксный ++
	   cout << *++ptr << ' ';		// 7 6 5 4 лишь бы что
	cout << endl;

	ptr = mas;	*ptr = 5;
	for(int i = 0; i < n; i++)
	   cout << (*ptr)++ << ' ';		// 5 6 7 8 9
	cout << endl;

	cout << *ptr << ' ' << endl;		// 10
	for (int i = 0; i < n; i++)
		cout << ++ * ptr << ' ';	// 11 12 13 14 15
	cout << endl;

	for(int* pt = mas; pt < mas + n; pt++)	// обнуление элементов
	   *pt = 0;				// массива mas – 0 0 0 0 0
}
