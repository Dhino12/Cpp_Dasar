#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <string>
#include <limits>
using namespace std;

struct mahasiswa{
    char nim[10], nama[50];
    string Nama; 

};

int main()
{
    //ios::out   = default, Oprasi Output;
    //ios::in    = Oprasi input (baca operasi) dari stream.
    //ios::app   = Menuliskan akhir baris setiap compile;
    //ios::trunc = Default, membuat file jika ada ,klo gk ada akan dibuat baru
    //ios::ate   = mulai dari akhir file
    //ios::binary= Mulai membuat file binary .bin

    ifstream fi; // membaca
    ofstream fo; // menulis
    mahasiswa mhs;
    char carinim[10];
    int n; 
    /**
    * kode dibawah ini adalah untuk write data ke dalam file.
    */
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    fo.open("mhs.bin", ios::binary | ios::out);
    for(int i=1; i<=n; i++)
    {
        cout << "\n Mahasiswa " << i;
        cout << "\n NIM: ";
        cin >> mhs.nim ;
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
        cout << "Nama: ";
        getline(cin,mhs.Nama); 
        fo.write((char *) &mhs, sizeof(mhs)); // menulis ke file
    }
    fo.close();
    
    /**
    * kode dibawah ini adalah untuk read data dari file.
    */
    fi.open("mhs.bin", ios::binary);
    int j = 1;
    while(fi.read((char *) &mhs, sizeof(mhs)))
    {
        cout << "\nMahasiswa: " << j++;
        cout << "\nNIM: " << mhs.nim;
        cout << "\nNama: " << mhs.Nama;
    }
    fi.close();
    
    /**
    * kode dibawah ini untuk melakukan searching
    */
    cout << "\nMasukkan nim yang mau dicari: ";
    cin >> carinim;
    fi.open("mhs.bin", ios::binary);
    while(fi.read((char *) &mhs, sizeof(mhs)))
    {
        if(strcmp(mhs.nim, carinim) == 0)
        //jika kedua string diatas sama makan akan menghasilkan = 0;
        {
            cout << "\nData Ditemukan: ";
            cout << "\nNIM: " << mhs.nim;
            cout << "\nNama: " << mhs.Nama;
        }
    }
    int hasil ;
    hasil = strcmp(mhs.nim ,carinim);
    cout << "\n Hasil Perbandingan = " << hasil << endl;
    fi.close();

    cin.ignore();
    cin.get(); 
    return 0;
}