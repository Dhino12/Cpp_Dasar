#include <iostream>
#include <string>
using namespace std;

int main() {
    //Ternary Oprator adalah tanda (?) 
    // Variable = (Kondisi) ? True   : False
    // Variable = (Kondisi) ? hasil1 : hasil2
    
    int a ,b,hasil;
    string hasil1 ,hasil2,output;

    hasil1 = "Kunyuk";
    hasil2 = "Megumi"; 
    a = 5; 

    cout << "Masukan Angka = ";
    cin >> b;

    output = ( a < b ) ? hasil1 : hasil2; 
    cout << output << endl;

    hasil = ( a < b ) ? (a*b) : (a+b);
    //Sama seperti fungsi IF Else
    if( a < b) { 
        hasil = a*b;
    }else{
        hasil = a+b;
    }
    cout << hasil << endl;
    
    cin.get();
    return 0;
}