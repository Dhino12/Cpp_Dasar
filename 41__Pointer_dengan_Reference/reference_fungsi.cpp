#include <iostream>
using namespace std;
void fungsi(int &);
void kuadrat(int &);

int main(){
    int a = 5; 
    cout << "========= FUNGSI REFERENCE ===========" << endl;
    cout << "Address a = " << &a << endl;
    cout << "  Nilai A = " << a << endl;
    fungsi(a);
    kuadrat(a);
    cout << "Nilai a = " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int &b){ 
    b = 10; 
    cout << "Address a = " << &b << endl;
    cout << "  Nilai A = " << b << endl;
}
void kuadrat(int &nilai){//Nilai Refrence 
    nilai = nilai * nilai;
}