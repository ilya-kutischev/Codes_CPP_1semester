// Пример 3. Выполнить проверку, попадает ли введённое значение
// переменной х в заданный диапазон от 1 до 4. Вывести сообщение.
#include <iostream>
using namespace std;
int main(){
  int x;
  cout << "Vvedi chislo x = ";	cin >> x;
  if (x == 1) cout<<"x = 1 \n";
  else if (x == 2) cout<<"x = 2 \n";
       else if (x == 3) cout<<"x = 3 \n";
           else if (x == 4) cout<<"x = 4 \n";
                else cout<<"x vne diapazona. \n";
  cout<<endl;
}
