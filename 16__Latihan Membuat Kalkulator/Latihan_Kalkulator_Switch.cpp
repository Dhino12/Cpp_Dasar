#include <iostream>

using namespace std;
int main(void){
    float a,b, hasil;
    char matematika;
    cout << "\n Selamat Datang" << endl;

    // Memasukan Input 
    cout << " Masukan Nilai Pertama :"<< endl;
    cin >> a;
    cout << " Pilih Oprator + , - ,/ ,* : ";
    cin >> matematika;
    cout << " Masukan Nilai Kedua :" << endl;
    cin >> b; 
    cout << "\n Hasil Perhitungan: ";

    switch (matematika){
        case '+' : 
        hasil = a + b; 
        break;

        case '-':
        hasil = a - b; 
        break;

        case '/':
        hasil = a / b; 
        break;

        case '*':
        hasil = a * b; 
        break;
    }  
    cout << a << matematika << b << " = " << hasil << endl;
    cin.get();
    return 0;
}