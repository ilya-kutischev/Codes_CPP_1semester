
// ѕример 4. ¬вод-вывод строки, массива строк (динамических).
// ѕерестановка строк.
#include <iostream>
using namespace std;
int main(){
  int n,m;
// ƒинамический одномерный массив char
  cout<<"Enter m-chislo simvolov in stroke:";  cin>>m;
  char* pstr1 = new char [m+1];   	 // выделение пам€ти под строку

  cin.ignore();
  cout<<"Enter text up_to "<< m<<" simvolov:";
  gets_s(pstr1, m+1);
  cout<<"Stroka: "<<pstr1<<endl;

  delete [] pstr1;            		   // освобождение пам€ти,занимаемой строкой

// ƒинамический двумерный массив char
  cout<<"Vvedi n-chislo strok:";  cin>>n;
  char ** pstr2 = new char*[n];   		 // выделение пам€ти под указатели на строки

  cout<<"Enter m-chislo simvolov in strokax: ";  cin>>m;
  cin.ignore();

  cout<<"Enter " << n << " stroki up_to "<< m<<" simvolov:\n";
  for(int i = 0; i < n; i++){
    pstr2[i] = new char[m+1];   		  // выделение пам€ти под i-ую строку текста
    gets_s(pstr2[i], m+1);
  }
// ¬ывод массива строк
  cout<<"Massiv strok: \n";
  for(int i = 0; i < n; i++)
    cout<<pstr2[i]<<endl;

// ѕерестановка 0 и 1-ой строк текста
  char * point = pstr2[0];
  pstr2[0] = pstr2[1];
  pstr2[1] = point;

// ¬ывод массива строк
   cout << "Massiv strok after exchange:\n";
   for(int i = 0; i < n; i++)
    cout<<pstr2[i]<<endl;

// ќсвобождение пам€ти, занимаемой массивом строк
  for(int i = 0; i < n; i++)
     delete [] pstr2[i];        		// освоб.пам€ти,занимаемой i-ой строкой
  delete [] pstr2;                		// освоб.пам€ти,занимаемой указат. на строки
}

