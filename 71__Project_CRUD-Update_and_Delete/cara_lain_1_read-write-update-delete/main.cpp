/*aplikasi nilai mahasiswa dengan menggunakan operasi file
*bundet.com
*Wawan Beneran
*Delete - Update
*/

#include <iostream >
#include <conio.h>
#include <fstream >
#include <stdio.h>
using namespace std; //diborland tidak perlu ini

/*
Program ini tidak asing diantara kalian, apalagi kalo bukan aplikasi nilai Mahasiswa.
Langkah 1 - kita buat dulu class NilaiMahasiswa, kemudian kita definisikan seperti nim, nama, uts, uas dan tugas,
berikutnya operasi-operasi yang berhubungan dengan data tersebut.
*/

class NilaiMahasiswa12131294{
    int nim12131294;
    char nama12131294[50];
    int uts12131294;
    int uas12131294;
    int tugas12131294; 

public:
    void inputNilai12131294(){ 
        cout<< "NIM  :"; cin >> nim12131294;
        cout<< "Nama :"; cin >> nama12131294;//kalian bisa menggunakan gets
        cout<< "TUGAS:"; cin >> tugas12131294;
        cout<< "UTS  :"; cin >> uts12131294;
        cout<< "UAS  :"; cin >> uas12131294;

    }

    void outputNilai12131294(){
        cout << "NIM         :" << nim12131294;
        cout << "\nNama        :" << nama12131294;
        cout << "\nTUGAS       :" << tugas12131294;
        cout << "\nUTS         :" << uts12131294;
        cout << "\nUAS         :" << uas12131294;
        cout << "\nNilai Akhir :" << nilaiAkhir();
        cout << "\nNilai Huruf :" << nilaiHuruf() <<endl;
    } 

    float nilaiAkhir(){
        return(tugas12131294 + uts12131294 + uas12131294) / 3;    
    } 

    char nilaiHuruf(){
        float nilai = nilaiAkhir();
        if(nilai> 80) return 'A';
        else if(nilai > 70) return 'B';
        else if(nilai > 60) return 'C';
        else if(nilai > 40) return 'D';
        else return 'E';
    } 

    int getNim(){
        return nim12131294;
    }
};
char namaFile[30] = "nilai.dat";

//menulis objek ke dlm file
    void simpanData12131294() {
        NilaiMahasiswa12131294 nilai;
        nilai.inputNilai12131294();

        //proses simpan objek ke file
        ofstream f;
        f.open(namaFile, ios::binary|ios::app);
        f.write((char*) &nilai, sizeof(nilai));
        f.close();
}

//membaca dari file
void bacaData12131294(){
    NilaiMahasiswa12131294 nilai;
    ifstream f;
    f.open( namaFile, ios::binary );
        
        while (f.read((char*)&nilai, sizeof(nilai))) {
        nilai.outputNilai12131294(); 
        } 
    f.close();
}

void cariData12131294(int nimDicari12131294) {
    NilaiMahasiswa12131294 nilai, nilaiKetemu;
    int ketemu12131294 = 0; // penanda pencarian ditemukan
    ifstream f;
    f.open( namaFile, ios::binary );
        while(f.read((char*)&nilai, sizeof(nilai))){
        //jika nim yang dicari ditemukan
            if (nilai.getNim() == nimDicari12131294){
                nilaiKetemu = nilai;
                ketemu12131294 = 1;
                break; // hentikan perulangan
            }
        }
        
    if (ketemu12131294 == 0) {
        cout <<"\nNim " << nimDicari12131294 << " tidak ditemukan \n";
    }
    else{
        cout <<"Nim yang dicari "<<nimDicari12131294<<"ditemukan \n:";
        nilaiKetemu.outputNilai12131294();
    }
    f.close();
}

//hapus data
void hapusData12131294(int nimDicari12131294){
    NilaiMahasiswa12131294 nilai;
    ifstream fi;
    fi.open(namaFile, ios::binary);
    
    ofstream fo;
    fo.open("tmp.dat", ios::out|ios::binary);
    
    int ketemu = 0;
    
        while(fi.read((char*) &nilai, sizeof(nilai))){
            if(nilai.getNim() != nimDicari12131294){
                fo.write((char*)&nilai, sizeof(nilai));
            }else {
                ketemu = 1;
            }
        }
    fi.close();
    fo.close();

    remove(namaFile);
    rename("tmp.dat", namaFile);
    
    if (ketemu ==1 ) {
    cout <<" mahasiswa dengan NIM" << nimDicari12131294 << "telah dihapus!\n";
    }
    else{
    cout <<"mahasiswa dengan NIM" << nimDicari12131294 << "tidak ditemukan!\n";
    }
}

//edit(modifikasi) data
void updateData12131294(int nimDicari12131294){
        NilaiMahasiswa12131294 nilai;
    fstream f; //fstream bisa digunakan untuk baca/tulis langsung
    f.open( namaFile, ios::in|ios::out );
        while(f.read((char*)&nilai, sizeof(nilai))){
            if(nilai.getNim() == nimDicari12131294) {
            //tampilkan detail nilai sebelum proses modifikasi
                nilai.outputNilai12131294();

            //input data baru
            cout<<"Silakan masukan data baru" <<endl;
                nilai.inputNilai12131294();

            //hentikan perulangan
                // break;
            }
        }
    f.close();
}

int main(){
int pil;
int data;
cout << "Pilihan"<<endl;
cout << "1. Cari"<< endl;
cout << "2. Update"<< endl;
cout << "3. Delete"<< endl;
cout << "4. Menambah"<< endl;
cout << "5. Membaca"<< endl;
cin >> pil;

switch (pil){
    case 1:
        cout <<"\nMasukan Nomor : ";
        cin >> data;
        cariData12131294(data);
        break;

    case 2:
        cout <<"\nMasukan Nomor :" ;
        cin >> data;
        updateData12131294(data);
        break;

    case 3:
        cout<<"\nMasukan Nomor :" ;
        cin >> data;
        hapusData12131294(data);
        break;

    case 4:
        simpanData12131294();
        break;

    default:
        cout << "\nBaca Data\n";
        bacaData12131294();
    }
    
    getch();
    cin.get();
    return 0;
}