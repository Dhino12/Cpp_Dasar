#include <iostream>
#include <limits> //Untuk = cin.ignore
#include <string.h> //Untuk = strlen(variable ,atau list) == 0
#include <string>
#include <fstream>
#include "crud.h" 


int main(){ 
    std::fstream data;

    crud::checkDatabase(data);

    int pilihan = crud::getoption();
    char is_continue; 

    enum option{Create = 1 ,READ ,UPDATE ,DELETE ,FINISH};
    while (pilihan != FINISH )
    {
        switch (pilihan){
        case Create:
            std::cout << "Menambah Data Mahasiswa "<< std::endl;  
            crud::addDataMahasiswa(data);
            break;
        case READ:
            std::cout << "Tampilkan Data Mahasiswa "<< std::endl;  
            crud::displayDataMahasiswa(data); 
            break;
        case UPDATE:
            std::cout << "Ubah Data Mahasiswa "<< std::endl; 
            crud::displayDataMahasiswa(data) ;
            crud::updateRecord(data);
            crud::displayDataMahasiswa(data) ;
            break;
        case DELETE:
            std::cout << "Hapus Data Mahasiswa "<< std::endl; 
            crud::displayDataMahasiswa(data) ;
            crud::deleteRecord(data); 
            crud::displayDataMahasiswa(data) ;
            break;
        default:
            std::cout << "Pilihan Tidak Ditemukan " << std::endl;
            break;
        }  
        label_continue:

        std::cout << "Lanjutkan ? (Y/N) = ";
        std::cin.get(is_continue);
        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = crud::getoption();
        }else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue;
        }  

    }
    std::cout << "Akhir dari program" << std::endl;
    
    std::cin.get();
    return 0;
} 

