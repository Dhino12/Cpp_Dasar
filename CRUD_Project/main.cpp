#include <iostream>
#include <limits> //Untuk = cin.ignore
#include <string.h> //Untuk = strlen(variable ,atau list) == 0
#include <string>
#include <fstream>
using namespace std;
struct Mahasiswa{
    int pk; /* Primery Key*/
    char nim[100];
    char nama[100];
    char jurusan[100];
    /* data */
};
struct Mahasiswa2{ 
    string nim;
    string nama;
    string jurusan;
    /* data */
};

//Prototype

int getoption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi ,Mahasiswa &inputMahasiswa);
void writeData2(fstream &data, int posisi ,Mahasiswa2 &inputMahasiswa);
Mahasiswa readData(fstream &data, int posisi);
int getDatasize(fstream &data);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);


int main(){ 
    fstream data;

    checkDatabase(data);

    int pilihan = getoption();
    char is_continue; 

    enum option{Create = 1 ,READ ,UPDATE ,DELETE ,FINISH};
    while (pilihan != FINISH )
    {
        switch (pilihan){
        case Create:
            cout << "Menambah Data Mahasiswa "<< endl;  
            addDataMahasiswa(data);
            break;
        case READ:
            cout << "Tampilkan Data Mahasiswa "<< endl;  
            displayDataMahasiswa(data); 
            break;
        case UPDATE:
            cout << "Ubah Data Mahasiswa "<< endl; 
            displayDataMahasiswa(data) ;
            updateRecord(data);
            displayDataMahasiswa(data) ;
            break;
        case DELETE:
            cout << "Hapus Data Mahasiswa "<< endl; 
            displayDataMahasiswa(data) ;
            deleteRecord(data); 
            displayDataMahasiswa(data) ;
            break;
        default:
            cout << "Pilihan Tidak Ditemukan " << endl;
            break;
        }  
        label_continue:

        cout << "Lanjutkan ? (Y/N) = ";
        cin.get(is_continue);
        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getoption();
        }else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue;
        }  

    }
    cout << "Akhir dari program" << endl;
    
    cin.get();
    return 0;
} 

void checkDatabase(fstream &data){ 
    data.open("data.bin",ios::out | ios::in | ios::binary);
    //Check File Ada atau Tidak
    if (data.is_open()){
        cout << "Data Exist" << endl;
    }else{
        cout << "database tidak ditemukan ,buat database baru" << endl;
        data.close();
        data.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int getoption(){
    int input;
    system("cls");
    cout << "\n Program Mahasiswa" << endl;
    cout << "==========================" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Tampilkan Data Mahasiswa" << endl;
    cout << "3. Ubah Data Mahasiswa" << endl;
    cout << "4. Hapus Data Mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=========================== " << endl;
    cout << "Pilih [1-5] = ";
    cin >> input ;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}
void writeData(fstream &data, int posisi ,Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
void writeData2(fstream &data, int posisi ,Mahasiswa2 &inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
Mahasiswa readData(fstream &data, int posisi){//------------
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1)* sizeof(Mahasiswa),ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}
int getDatasize(fstream &data){
    int start ,end;
    data.seekp(0,ios::beg);
    start = data.tellg();
    cout << "Start = " << start << endl;
    data.seekg(0,ios::end);
    end = data.tellg();
    cout << "End = " << end << endl;
    return (end-start) / sizeof(Mahasiswa);
}
void addDataMahasiswa(fstream &data){

    Mahasiswa inputMahasiswa ,lastMahasiswa;
    int size = getDatasize(data);
    cout << "Ukuran Data = " << size << endl;
    if(size == 0){
        inputMahasiswa.pk = 1;

    }else{
        lastMahasiswa = readData(data,size);
        cout << "pk = " << lastMahasiswa.pk << endl;
        inputMahasiswa.pk = lastMahasiswa.pk+1;
    }
    
    // readData(data,size); 
    cout << "Nama = ";
    cin.get(inputMahasiswa.nama,20); 
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "NIM = ";
    cin.get(inputMahasiswa.nim,20);  
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Jurusan = ";
    cin.get(inputMahasiswa.jurusan,20);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    writeData(data,size+1,inputMahasiswa);
    
}
void displayDataMahasiswa(fstream &data){
    int size = getDatasize(data);
    Mahasiswa showMahasiswa;
    cout << "No.\tpk.\tNim.\tNama.\tJurusan." << endl;
    for(int i = 1; i <= size ; i++){
        showMahasiswa = readData(data,i);//------------
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t"; 
        cout << showMahasiswa.nim << "\t";  
        cout << showMahasiswa.nama << "\t";  
        cout << showMahasiswa.jurusan << endl;   
    }
}
void updateRecord(fstream &data){
    int nomor;
    Mahasiswa updateMahasiswa;
    cout << "Pilih No = ";
    cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    updateMahasiswa = readData(data,nomor);

    cout << "Pilihan Data = " << endl;
    cout << "Nim = " << updateMahasiswa.nim << endl;
    cout << "Nama = " << updateMahasiswa.nama << endl;
    cout << "Jurusan = " << updateMahasiswa.jurusan << endl;
    cout << "Merubah Data = " << endl;
    cout << "Nim = ";
    cin.get(updateMahasiswa.nim,20);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Nama = ";
    cin.get(updateMahasiswa.nama,20);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Jurusan = ";
    cin.get(updateMahasiswa.jurusan,20);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    writeData(data,nomor,updateMahasiswa);
}
void deleteRecord(fstream &data){
    int nomor ,size ,offset;
    Mahasiswa tempMahasiswa;
    Mahasiswa2 blankMahasiswa ;
    fstream dataSementara;
    size = getDatasize(data);
    //  1. Pilih Nomor .
    cout << "Hapus No = ";
    cin >> nomor;
    // 2. di Posisi ini diisi dengan data kosong .
    
    writeData2(data,nomor,blankMahasiswa);
    cout << "Nama = " << blankMahasiswa.nama << endl;
    
    // 3. kita check data yang ada dari file data.bin, kalau ada data
    //     kita pindahkan ke file sementara.1
    dataSementara.open("temp.bin",ios::trunc | ios::out | ios::in | ios::binary);
    offset = 0;
    for(int i = 1; i <= size; i++){
        tempMahasiswa = readData(data,i);
            //karena yang dipakai char nama[100]
            //maka check panjang char dengan strlen(variable ,atau list) == 0
        if(strlen(tempMahasiswa.nim) != false){ 
            writeData(dataSementara,i-offset,tempMahasiswa); 
        }else{       
            offset++;
            cout << "Data Sudah Dihapus " << endl;
        }
    }
    //   4. kita pindahkan data dari file sementara ke data.bin 
    
    size = getDatasize(dataSementara);
    data.close();
    data.open("data.bin",ios::trunc | ios::out | ios::binary);
    data.close();
    data.open("data.bin",ios::out | ios::in | ios::binary);

        for(int i = 1; i <= size; i++){
            tempMahasiswa = readData(dataSementara ,i);
            writeData(data, i ,tempMahasiswa);  
        }
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}