#include <iostream>
#include <cstring>
using namespace std;
class Phone {
    char surname[256];
    char address[256];
    unsigned phone;
public:
    Phone(const char* surname = "unknown", const char* adress = "not founded", unsigned phone = 0);
    Phone(char*, char*, unsigned);
    const char* get_surname() const { return surname; }
    const char* get_address() const { return address; }
    unsigned    get_phone()  const { return phone; }

};
Phone::Phone(const char* surnam, const char* addres, unsigned phon) {
    strcpy_s(surname, 256, surnam);			// инициализация поля 
    strcpy_s(address, 256, addres);
    phone = phon;						// инициализация поля 
}
void print_sorted_phones(Phone* mas, size_t n);
void print_nums_on_x(Phone* mas, size_t n, unsigned x);
int main() {

    const size_t max_size = 4;
    Phone stud_arr[max_size] = {		// инициализация
     Phone("Wasia","minsk", 236722),
     Phone("Petia","minsk", 487648720),
     Phone("Olesa","minsk", 26373526),
     Phone("Dima","vitebsk", 984726)
    };

    for (size_t i = 0; i < max_size; i++) {
        cout << stud_arr[i].get_surname(); 		
        cout << "   ";
        cout << stud_arr[i].get_address(); 		
        cout << "   ";
        cout << stud_arr[i].get_phone();  		
        cout << '\n';
    }
    print_sorted_phones(stud_arr, max_size);
    cout << "\n Vvedi chislo x dlya poiska:\n";
    unsigned x;
    cin >> x;
    print_nums_on_x(stud_arr, max_size, x);
}
void print_sorted_phones(Phone* mas, size_t n) {
    int flag = 1; Phone x;    size_t i = 1;
    while (flag) {
        flag = 0;
        for (size_t j = 0; j < n - i; j++)
            if (mas[j].get_phone() > mas[j + 1].get_phone())
            {
                x = mas[j];       mas[j] = mas[j + 1];        mas[j + 1] = x;
                flag = 1;
            }
        i++;
    }
    cout << "\n sorted mas:\n";
    for (size_t i = 0; i < n; i++) {
        cout << mas[i].get_surname(); 		
        cout << "   ";
        cout << mas[i].get_address(); 
        cout << "   ";
        cout << mas[i].get_phone();  		
        cout << '\n';
    }
}
void print_nums_on_x(Phone* mas, size_t n, unsigned x) {
    cout << "\n start with digit X:\n";
    for (size_t i = 0; i < n; i++) {
        unsigned phone = mas[i].get_phone();
        while (phone > 9) { phone /= 10; }
        if (x != phone) continue;
        cout << mas[i].get_surname(); 		
        cout << "   ";
        cout << mas[i].get_address(); 	
        cout << "   ";
        cout << mas[i].get_phone();  	
        cout << '\n';
    }
}