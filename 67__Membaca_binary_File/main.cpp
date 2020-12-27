#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    //ios::out   = default, Oprasi Output;
    //ios::in    = Oprasi input (baca operasi) dari stream.
    //ios::app   = Menuliskan akhir baris setiap compile;
    //ios::trunc = Default, membuat file jika ada ,klo gk ada akan dibuat baru
    //ios::ate   = mulai dari akhir file
    //ios::binary= Mulai membuat file binary .bin
    fstream myfile;
    char hasil;
    myfile.open("data.bin", ios::in | ios::binary);
    myfile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
    cout << "Besar Int = " << sizeof(hasil) << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}
    // fstream myfile;
    // int number = 12345;
    // myfile.open("data.bin", ios::out | ios::binary);
    // myfile.write(reinterpret_cast<char*>(&number),sizeof(number));
    // myfile.close();