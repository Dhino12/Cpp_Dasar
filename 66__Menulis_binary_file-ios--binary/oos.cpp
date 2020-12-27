#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    fstream infile;
    infile.open("data.bin", ios::in | ios::binary);
    string str;
    size_t size;
    infile.read(reinterpret_cast<char*>(&size),sizeof(size));
    str.resize(size);
    infile.read(&str[0], size);
    
    cin.get();
    return 0;
}