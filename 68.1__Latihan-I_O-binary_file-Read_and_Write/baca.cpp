#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mahasiswa{
    int nim;
    char nama[20];
    char jurusan[20];
    
    /* data */ 
};
mahasiswa ambildata(int &posisi ,fstream &myfile){ 
    mahasiswa bufferdata;
    myfile.seekp((posisi-1)*sizeof(mahasiswa),ios::beg);

    myfile.read(reinterpret_cast<char*>(&bufferdata),sizeof(mahasiswa));   
    return bufferdata;

}
int main(){

    fstream myfile;
    mahasiswa databaca;
    myfile.open("data.bin",ios::in | ios::binary);
    // 0----52------|-------52-------|-------52--------| 
    int posisi = 3; //untuk check coba ubah yang disini 
    databaca = ambildata(posisi,myfile);
    cout << databaca.nim << endl;
    cout << databaca.nama << endl;
    cout << databaca.jurusan << endl;
    myfile.close();

    cin.get();
    return 0;
}