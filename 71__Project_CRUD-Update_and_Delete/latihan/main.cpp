#include <iostream>
#include <string>
#include <limits>
#include <string.h>
#include <fstream>
using namespace std;

struct Mahasiswa{
    int pk;
    char nim[100];
    char nama[100];
    char jurusan[100];
    /* data */
};
struct Mahasiswa2{ 
    string nim ;
    string nama ;
    string jurusan ;
    /* data */
};

void checkdata(fstream &data){
    data.open("data.bin",ios::out | ios ::in | ios::binary);
    if(data.is_open()){
        cout << "Data Suda Ada" << endl;
    }else{
        cout << "Data Tidak Ada ,buat database baru" << endl;
        data.close();
        data.open("data.bin",ios::trunc|ios::out |ios::in |ios::binary);
    }
}
int getOption(){
    system("cls");
    int pilihan;
    cout << "Database Mahasiswa" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Read Data Mahasiswa" << endl;
    cout << "3. Update Data Mahasiswa" << endl;
    cout << "4. Delete Data Mahasiwa " << endl;
    cout << "5. Finsih" << endl;
    cout << "Pilih [1-5]: ";
    cin >> pilihan;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return pilihan;
}
Mahasiswa readData(fstream &data ,int posisi){
    Mahasiswa readmahasiswa;
    data.seekg((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.read(reinterpret_cast<char*>(&readmahasiswa),sizeof(Mahasiswa));
    return readmahasiswa;
}
void writedata(fstream &data ,int posisi,Mahasiswa &inputmahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa),sizeof(Mahasiswa));
}
void writedata2(fstream &data ,int posisi,Mahasiswa2 &inputmahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa),sizeof(Mahasiswa));
}
int getdatasize(fstream &data){
    int start ,end;
    data.seekp(0,ios::beg);
    start = data.tellg();
    data.seekg(0,ios::end);
    end = data.tellg();
    return (end - start) / sizeof(Mahasiswa); 
}
void addDataMahasiswa(fstream &data){
    Mahasiswa inputmahasiswa ,lastmahasiswa;
    int size = getdatasize(data);
    cout << "Ukuran Data = " << size << endl;
    if(size == 0){
        inputmahasiswa.pk = 1;
    }else{
        lastmahasiswa = readData(data ,size);
        cout << "pk = " << lastmahasiswa.pk << endl;
        inputmahasiswa.pk = lastmahasiswa.pk + 1;
    }

    cout << "Nama: ";
    cin.get(inputmahasiswa.nama,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Nim: ";
    cin.get(inputmahasiswa.nim,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Jurusan: ";
    cin.get(inputmahasiswa.jurusan,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    writedata(data ,size + 1 ,inputmahasiswa);
}
void displayDataMahasiswa(fstream &data){
    Mahasiswa showmahasiswa;
    int size = getdatasize(data);
    cout << "No \tPK \tNama \tNim \tJurusan" << endl;
    for(int i = 1 ;i <= size ;i++){
        showmahasiswa = readData(data ,i);
        cout << i << "\t";
        cout << showmahasiswa.pk << "\t";
        cout << showmahasiswa.nama << "\t";
        cout << showmahasiswa.nim << "\t";
        cout << showmahasiswa.jurusan << endl;
    }
}
void updateRecord(fstream &data){
    int nomer ;
    Mahasiswa updateMahasiswa;
    cout << "Pilih No: ";
    cin >> nomer;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    updateMahasiswa = readData(data,nomer);

    cout << "Pilihan Data " << endl;
    cout << "Nama: ";
    cout << updateMahasiswa.nama << endl;
    cout << "Nim: ";
    cout << updateMahasiswa.nim << endl;
    cout << "Jurusan: ";
    cout << updateMahasiswa.jurusan << endl;

    cout << "Merubah Data: " << endl;
    cout << "Nama: ";
    cin.get(updateMahasiswa.nama,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Nim: ";
    cin.get(updateMahasiswa.nim,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Jurusan: ";
    cin.get(updateMahasiswa.jurusan,100);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    writedata(data ,nomer,updateMahasiswa);
}
void deleteRecord(fstream &data){
    int nomer ,size ,offset;
    Mahasiswa tempmahasiswa;
    Mahasiswa2 blankdata;
    fstream datasementara;
    size = getdatasize(data);
    cout << "Pilih No: ";
    cin >> nomer;

    writedata2(data ,nomer ,blankdata);
    datasementara.open("temp.bin",ios::trunc| ios::out |ios::in |ios::binary);

    offset = 0;
    for(int i = 1;i<= size ;i++){
        tempmahasiswa = readData(data,i);
        if(strlen(tempmahasiswa.nim) != false){
            writedata(datasementara,i - offset ,tempmahasiswa);
        }else{
            offset++;
        }
    }
    size = getdatasize(datasementara);
    data.close();
    data.open("data.bin",ios::trunc |ios::out |ios::binary);
    data.close();
    data.open("data.bin",ios::out | ios::in |ios::binary);
    for(int i = 1; i <= size ;i++){
        tempmahasiswa = readData(datasementara,i);
        writedata(data,i,tempmahasiswa);
    } 
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

int main()
{
    int pilihan = getOption();
    fstream data;
    checkdata(data);
    enum option {CREATE = 1 ,READ ,UPDATE ,DELETE ,FINSIH};
    while (pilihan != FINSIH){
        switch (pilihan){
        case CREATE:
            cout << "Tambah Data Mahasiswa " << endl;
            addDataMahasiswa(data);
            break;
        case READ:
            cout << "Read Data Mahasiswa" << endl;
            displayDataMahasiswa(data);
            break;
        case UPDATE:
            cout << "Update Data Mahasiswa" << endl;
            displayDataMahasiswa(data);
            updateRecord(data);
            break;
        case DELETE:
            cout << "Delete Data Mahasiswa" << endl;
            displayDataMahasiswa(data);
            deleteRecord(data);
            displayDataMahasiswa(data);
            break;
        default:
            cout << "Pilihan Data Tidak Ditemukan " << endl;
            break;
        }

        label_continue:
        char is_continue;
        cout << "Lanjut(Y/N): ";
        cin >> is_continue;
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
        if((is_continue == 'Y') || (is_continue == 'y')){
            pilihan = getOption();
        }else if((is_continue == 'N') || (is_continue == 'n')){
            break;
        }else{
            cout << "Inputan Tidak Valid" << endl;
            goto label_continue;
        }
    }
    cout << "Akhir Dari Program" << endl;

    cin.get();
    return 0;
}
