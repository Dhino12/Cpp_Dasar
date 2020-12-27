#include <iostream>
#include <fstream> //ofstream ,ifstream ,fstream

using namespace std;

int main(){

    ofstream myfile;
    int a = 123456789;
    //ios::out   = default, Oprasi Output;
    //ios::app   = Menuliskan akhir baris setiap compile;
    //ios::trunc = Default, membuat file jika ada ,klo gk ada akan dibuat baru

    myfile.open("data1.txt",ios::out);
    myfile << "Tuliskan Data 1\n";
    myfile << a ;
    myfile.close();

    myfile.open("data2.txt",ios::trunc);
    myfile << "Tuliskan Data 2";
    myfile.close();

    myfile.open("data3.txt",ios::app);
    myfile << "Tuliskan Data 3";
    myfile.close();
    
    cin.get();
    return 0;
}