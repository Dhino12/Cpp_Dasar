#include <iostream>
using namespace std;

int main(void){
    int a = 4;
    int b = 3; 
    int hasil;

    //Penjumlahan
    hasil = a + b;
    cout << a << " + "  << b <<" = " << hasil << endl; 

    //Pengurangan   
    hasil = a - b;
    cout << a << " - " << b <<" = " << hasil << endl;

    //Perkalian   
    hasil = a * b;
    cout << a << " x " << b <<" = " << hasil << endl;

    //Pembagian   
    hasil = a / b;
    cout << a << " : " << b <<" = " << hasil << endl;

    //Modulus   
    hasil = a % b;
    cout << a << " % " << b <<" = " << hasil << endl;

    //Kurung
    hasil = (a + b) * a;
    cout << "( " << a << " + " << b << " )"<< " x " << a << " = " << hasil << endl;

    cin.get();
    return 0;

}