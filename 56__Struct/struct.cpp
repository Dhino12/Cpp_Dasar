#include <iostream>
using namespace std;

    //Struct = data yang dibentuk dari beberapa data 
    //struct variable{data}
    struct buah{
        string warna ;
        float berat;
        int harga;
        string rasa;

        /* data */
    };
    
    
int main() {

    buah apel;
    buah jeruk;

    //variable.data = //
    apel.warna = "Merah";
    apel.harga = 50000;
    apel.rasa = "Appel";
    apel.berat = 250.50f;

    jeruk.warna = "Orange";
    jeruk.harga = 20000;
    jeruk.rasa = "Jeruk";
    jeruk.berat = 150.50f;

    cout << "======== APPEL ======= " << endl;
    cout << "Warna = " << apel.warna << endl;
    cout << "Berat = " << apel.berat << endl;
    cout << "Harga = Rp." << apel.harga << endl;
    cout << "Rasa = " << apel.rasa << endl;

    cout << "======== JERUK ======= " << endl;
    cout << "Warna = " << jeruk.warna << endl;
    cout << "Berat = " << jeruk.berat << endl;
    cout << "Harga = Rp." << jeruk.harga << endl;
    cout << "Rasa = " << jeruk.rasa << endl;

    cin.get();
    return 0;
}