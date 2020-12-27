#include <iostream>
#include <string>
using namespace std;

    struct aktor {
        string nama;
        int tahun_lahir;

        /* data */
    };
    
    struct film {
        string judul;
        string genre;
        int tahun;
        //Struct Aktor
        aktor pemeran_1;
        aktor pemeran_2;
        /* data */
    };
    
int main() {
    aktor aktor1, aktor2;
    film film1 ,film2;

    //Buat Aktor 1
    aktor1.nama = "Michel Jordan";
    aktor1.tahun_lahir = 1999;

    //Buat Aktor 2
    aktor2.nama = "Izumi";
    aktor2.tahun_lahir = 2000;

    //buat film
    film1.judul = "Pengabdi Setan";
    film1.genre = "Dokumenter";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "Dilan 2000";
    film2.genre = "Dokumenter";
    film2.tahun = 2040;
    film2.pemeran_1 = aktor1;
    film2.pemeran_2 = aktor2;

    cout << "============ Struct Nama Film 1 ===============" << endl;
    cout << "Judul Film1 = " << film1.judul << endl;
    cout << "Pemeran film1 = " << film1.pemeran_1.nama << endl;
    cout << "Tahun Lahir film1 = " << film1.pemeran_2.tahun_lahir << endl << endl;

    cout << "============ Struct Nama Film 2 ===============" << endl;
    cout << "Judul Film2 = " << film2.judul << endl;
    cout << "Pemeran film2 = " << film2.pemeran_1.nama << endl; 

    cin.get();
    return 0;
}