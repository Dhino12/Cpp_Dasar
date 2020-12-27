#include <iostream>
#include <fstream> 
#include <string.h>
using namespace std;

struct nama {
    char nama[20];
    int age;
};
int main(){
    ifstream fi; // membaca
    ofstream fo; // menulis
    nama teman;
    fo.open("teman.bin",ios::binary | ios::out);
    strcpy(teman.nama,"hendra soewarno");
    teman.age = 31;
    fo.seekp(0);
    fo.write((char*)&teman, sizeof(teman));
    strcpy(teman.nama,"susan dewichan");
    teman.age = 30;fo.seekp(sizeof(teman));
    fo.write((char*)&teman, sizeof(teman));
    fo.close();

    //MEMBACA 

    fi.open("teman.bin",ios::in | ios::binary);
    fi.seekg(0);
    fi.read((char*)&teman, sizeof(teman));
    cout << teman.nama << endl;
    cout << teman.age << endl;
    fi.seekg(sizeof(teman));
    fi.read((char*)&teman, sizeof(teman));
    cout << teman.nama << endl;
    cout << teman.age << endl;
    fi.close();

    cin.get();
    return 0;
}