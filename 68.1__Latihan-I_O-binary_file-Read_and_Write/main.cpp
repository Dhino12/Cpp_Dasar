#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct mahasiswa{
    int nim;
    char nama[20];
    char jurusan[20];
    
    /* data */

}; 
mahasiswa ambildata(int posisi ,fstream &myfile){ 
    mahasiswa bufferdata;
    myfile.seekp((posisi-1)*sizeof(mahasiswa));

    myfile.read(reinterpret_cast<char*>(&bufferdata),sizeof(mahasiswa));   
    return bufferdata; 
}

void menulisdata(mahasiswa &data, fstream &myfile){ 
    myfile.write(reinterpret_cast<char*>(&data),sizeof(mahasiswa));
}
void menulisdatabypos(int posisi ,mahasiswa &bufferdata,fstream &myfile){
    myfile.seekg((posisi-1)*sizeof(mahasiswa)); 
    myfile.write(reinterpret_cast<char*>(&bufferdata),sizeof(mahasiswa));   
}


int main(){

    fstream myfile;
    myfile.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);

    mahasiswa mahasiswa1, mahasiswa2, mahasiswa3 ,output;
    mahasiswa2.nim = 100;
    strcpy(mahasiswa2.nama,"susan dewichan");
    strcpy(mahasiswa2.jurusan,"informatika");
    
    mahasiswa1.nim = 101 ;
    strcpy(mahasiswa1.nama,"dewi putri");
    strcpy(mahasiswa1.jurusan,"memasak");

    mahasiswa3.nim = 102 ;
    strcpy(mahasiswa3.nama,"tono hariyanto");
    strcpy(mahasiswa3.jurusan,"mesin");

    menulisdata(mahasiswa1,myfile);
    menulisdata(mahasiswa2,myfile);
    menulisdata(mahasiswa3,myfile);

    strcpy(mahasiswa2.nama,"tono hariyanto");
    // mahasiswa2.nama = "Mario";
    menulisdatabypos(2,mahasiswa2,myfile);
    output = ambildata(2 ,myfile);
    cout << output.nim << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;

    myfile.close();

    cin.get();
    return 0;
}