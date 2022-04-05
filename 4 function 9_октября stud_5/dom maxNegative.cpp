// Вводится последовательность из n чисел.
// Найти максимальное число среди отрицательных.
#include <iostream>
using namespace std;
int main() {
    int n, num, max = 0;
         cout << " vvedi n: ";    cin >> n;
       
    for (int i = 1; i <= n; i++) {
        cout << " vvedi number:  ";    cin >> num;
        if ((num < 0) && (max == 0)) max = num;
        else
            if ((num < 0) && (num > max)) max = num;
    }
    if(max == 0) cout<< " No negative number " << endl;
    else cout << " max = " << max<<endl;
 
}
