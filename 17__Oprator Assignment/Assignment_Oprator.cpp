#include <iostream>
using namespace std;

int main(void){

    //assignment
    float a;
    cout << " Masukan Nilai : ";
    cin >> a;
    a = a + 3; 
    cout << "Nilai Awal : " << a << endl;

    //assignment oprator
    //variable = variable oprator ekspresi
    //   a     =    a       +       10 
    // variable oprator = ekspresi
    //   a        +=         10

    a += 3;
    cout << " ditambah 3 menjadi : " << a << endl;

    a -= 4;
    cout << " dikurang 4 menjadi : " << a << endl;

    a /= 5;
    cout << " dibagi 5 menjadi : " << a << endl;

    a *= 6;
    cout << " dikali 6 menjadi : " << a << endl;

    cin.get();
    return 0;
}