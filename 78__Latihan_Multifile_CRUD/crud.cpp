#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "crud.h"

void crud::checkDatabase(std::fstream &data){ 
    data.open("data.bin",std::ios::out | std::ios::in | std::ios::binary);
    //Check File Ada atau Tidak
    if (data.is_open()){
        std::cout << "Data Exist" << std::endl;
    }else{
        std::cout << "database tidak ditemukan ,buat database baru" << std::endl;
        data.close();
        data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

int crud::getoption(){
    int input;
    system("cls");
    std::cout << "\n Project CRUD Multifile " << std::endl;
    std::cout << "\n Program Mahasiswa" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "1. Tambah Data Mahasiswa" << std::endl;
    std::cout << "2. Tampilkan Data Mahasiswa" << std::endl;
    std::cout << "3. Ubah Data Mahasiswa" << std::endl;
    std::cout << "4. Hapus Data Mahasiswa" << std::endl;
    std::cout << "5. Selesai" << std::endl;
    std::cout << "=========================== " << std::endl;
    std::cout << "Pilih [1-5] = ";
    std::cin >> input ;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    return input;
}
void crud::writeData(std::fstream &data, int posisi ,Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),std::ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
void crud::writeData2(std::fstream &data, int posisi ,Mahasiswa2 &inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa),std::ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
crud::Mahasiswa crud::readData(std::fstream &data, int posisi){//------------
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1)* sizeof(Mahasiswa),std::ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}
int crud::getDatasize(std::fstream &data){
    int start ,end;
    data.seekp(0,std::ios::beg);
    start = data.tellg();
    std::cout << "Start = " << start << std::endl;
    data.seekg(0,std::ios::end);
    end = data.tellg();
    std::cout << "End = " << end << std::endl;
    return (end-start) / sizeof(Mahasiswa);
}
void crud::addDataMahasiswa(std::fstream &data){

    Mahasiswa inputMahasiswa ,lastMahasiswa;
    int size = crud::getDatasize(data);
    std::cout << "Ukuran Data = " << size << std::endl;
    if(size == 0){
        inputMahasiswa.pk = 1;

    }else{  
        lastMahasiswa = crud::readData(data,size);
        std::cout << "pk = " << lastMahasiswa.pk << std::endl;
        inputMahasiswa.pk = lastMahasiswa.pk+1;
    }
    
    // readData(data,size); 
    std::cout << "Nama = ";
    std::cin.get(inputMahasiswa.nama,20); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "NIM = ";
    std::cin.get(inputMahasiswa.nim,20);  
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Jurusan = ";
    std::cin.get(inputMahasiswa.jurusan,20);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    
    crud::writeData(data,size+1,inputMahasiswa);
    
}
void crud::displayDataMahasiswa(std::fstream &data){
    int size = crud::getDatasize(data);
    Mahasiswa showMahasiswa;
    std::cout << "No.\tpk.\tNim.\tNama.\tJurusan." << std::endl;
    for(int i = 1; i <= size ; i++){
        showMahasiswa = crud::readData(data,i);//------------
        std::cout << i << "\t";
        std::cout << showMahasiswa.pk << "\t"; 
        std::cout << showMahasiswa.nim << "\t";  
        std::cout << showMahasiswa.nama << "\t";  
        std::cout << showMahasiswa.jurusan << std::endl;   
    }
}
void crud::updateRecord(std::fstream &data){
    int nomor;
    Mahasiswa updateMahasiswa;
    std::cout << "Pilih No = ";
    std::cin >> nomor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    updateMahasiswa = crud::readData(data,nomor);

    std::cout << "Pilihan Data = " << std::endl;
    std::cout << "Nim = " << updateMahasiswa.nim << std::endl;
    std::cout << "Nama = " << updateMahasiswa.nama << std::endl;
    std::cout << "Jurusan = " << updateMahasiswa.jurusan << std::endl;
    std::cout << "Merubah Data = " << std::endl;
    std::cout << "Nim = ";
    std::cin.get(updateMahasiswa.nim,20);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Nama = ";
    std::cin.get(updateMahasiswa.nama,20);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Jurusan = ";
    std::cin.get(updateMahasiswa.jurusan,20);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    crud::writeData(data,nomor,updateMahasiswa);
}
void crud::deleteRecord(std::fstream &data){
    int nomor ,size ,offset;
    Mahasiswa tempMahasiswa;
    Mahasiswa2 blankMahasiswa ;
    std::fstream dataSementara;
    size = crud::getDatasize(data);
    //  1. Pilih Nomor .
    std::cout << "Hapus No = ";
    std::cin >> nomor;
    // 2. di Posisi ini diisi dengan data kosong .
    
    crud::writeData2(data,nomor,blankMahasiswa);
    std::cout << "Nama = " << blankMahasiswa.nama << std::endl;
    
    // 3. kita check data yang ada dari file data.bin, kalau ada data
    //     kita pindahkan ke file sementara.1
    dataSementara.open("temp.bin",std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    offset = 0;
    for(int i = 1; i <= size; i++){
        tempMahasiswa = crud::readData(data,i);
            //karena yang dipakai char nama[100]
            //maka check panjang char dengan strlen(variable ,atau list) == 0
        if(strlen(tempMahasiswa.nim) != false){ 
            crud::writeData(dataSementara,i-offset,tempMahasiswa); 
        }else{       
            offset++;
            std::cout << "Data Sudah Dihapus " << std::endl;
        }
    }
    //   4. kita pindahkan data dari file sementara ke data.bin 
    
    size = crud::getDatasize(dataSementara);
    data.close();
    data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::binary);
    data.close();
    data.open("data.bin",std::ios::out | std::ios::in | std::ios::binary);

        for(int i = 1; i <= size; i++){
            tempMahasiswa = crud::readData(dataSementara ,i);
            crud::writeData(data, i ,tempMahasiswa);  
        }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}