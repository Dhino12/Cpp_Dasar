#include <iostream>

using namespace std;
int main(){
    float a,b, hasil;
    char matematika;
    cout << "Selamat Datang" << endl;

    // Memasukan Input 
    cout << " Masukan Nilai Pertama :"<< endl;
    cin >> a;
    cout << " Pilih Oprator + , - ,/ ,* : " << endl;
    cin >> matematika;
    cout << " Masukan Nilai Kedua :" << endl;
    cin >> b;

    cout << "\n Hasil Perhitungan: ";
    cout << a << matematika << b << endl;

    if (matematika == '+'){
        hasil = a + b;
    }
    else if ( matematika == '-'){
        hasil = a - b;
    }
    else if ( matematika == '*'){
        hasil = a * b;
    }
    else if ( matematika == '/'){
        hasil = a / b;
    }
    else {
        cout << "Oprator Anda Salah" <<  endl;
    }
    
    cout << " = " << hasil << endl;
    cin.get();
    return 0;
}