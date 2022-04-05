// Пример 3. Указатель +1 для разных типов.cpp
#include <iostream>
using namespace std;

int main(){
    cout << "The size of  short int " << sizeof(short) << " bytes.\n";
    cout << "The size of  int " << sizeof(int) << " bytes.\n";
    cout << "The size of  long int " << sizeof(long) << " bytes.\n";
    cout << "The size of  float " << sizeof(float) << " bytes.\n";
    cout << "The size of  double " << sizeof(double) << " bytes.\n\n";
    short shortV = 1;
    short* pshortV = &shortV;
    cout << "shortV:  " << shortV << " address:  " << pshortV
        << "   pshortV+1: " << (pshortV + 1) << '\n';

    int intV = 2;
    int* pintV = &intV;
    cout << "  intV:  " << intV << " address:  " << pintV
        << "   pintV+1:   " << (pintV + 1) << '\n';

    long longV = 3;
    long* plongV = &longV;
    cout << " longV:  " << longV << " address:  " << plongV
        << "   plongV+1:  " << (plongV + 1) << '\n';

    float floatV = 4;
    float* pfloatV = &floatV;
    cout << "floatV:  " << floatV << " address:  " << pfloatV
        << "   pfloatV+1: " << (pfloatV + 1) << '\n';

    double doubleV = 5;
    double* pdoubleV = &doubleV;
    cout << "doubleV: " << doubleV << " address:  " << pdoubleV
        << "   pdoubleV+1 " << (pdoubleV + 1) << '\n';
}