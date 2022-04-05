// Пример 3. Ввод-вывод строки, массива строк (статических).
#include <iostream>
using namespace std;
int main(){
   const int n = 3, m = 10;
   char  str1[m], str2[n][m];
   
// Ввод строки (текста)
   cout<<"Enter text up_to "<<m-1<<" simvolov:\n";
   gets_s(str1);

// Вывод  строки
   cout<<"Stroka: "<<endl<<str1<<endl;

// Ввод массива строк
   cout<<"Enter "<<n<<" stroki up_to "<<m-1<<" simvolov:"<<endl;
   for(int i = 0; i < n; i++)
     gets_s(str2[i]);

// Вывод массива строк
   cout<<"Massiv strok:\n";
   for(int i = 0; i < n; i++)
     cout<< str2[i]<<endl;

  char* p[n];				// массив указателей на строки 
  char * x;
  for(int i = 0; i < n; i++)
    p[i] = str2[i];

 x = p[0];   p[0] = p[1];    p[1] = x;	// перестановка 1 и 2 строк

// Вывод массива строк после перестановки
   cout << "Massiv strok after exchange:\n";
   cout << "Used array_pointers:" << endl;
   for(int i = 0; i < n; i++)
     cout<< p[i]<<endl;

// Вывод исходного массива строк после перестановки
    cout << "Massiv strok after exchange:\n";
    cout << "Used name_massiva:" << endl;
    for(int i = 0; i < n; i++)
      cout<< str2[i]<<endl;
}

