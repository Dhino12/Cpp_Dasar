#include <limits> //Untuk = cin.ignore
#include <string>
#include <fstream>

namespace crud{
    struct Mahasiswa{
        int pk; /* Primery Key*/
        char nim[100];
        char nama[100];
        char jurusan[100];
        /* data */
    };
    struct Mahasiswa2{ 
        std::string nim;
        std::string nama;
        std::string jurusan;
        /* data */
    };
    //Prototype

    int getoption();
    void checkDatabase(std::fstream &data);
    void writeData(std::fstream &data, int posisi ,Mahasiswa &inputMahasiswa);
    void writeData2(std::fstream &data, int posisi ,Mahasiswa2 &inputMahasiswa);
    Mahasiswa readData(std::fstream &data, int posisi);
    int getDatasize(std::fstream &data);
    void addDataMahasiswa(std::fstream &data);
    void displayDataMahasiswa(std::fstream &data);
    void updateRecord(std::fstream &data);
    void deleteRecord(std::fstream &data);

}