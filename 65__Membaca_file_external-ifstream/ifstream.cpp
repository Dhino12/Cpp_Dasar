#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    ifstream myfile;
    string output,buffer;
    bool isdata = false;
    int nomer;
    string nama_kalian;

    //ios::in
    //ios::ate = mulai dari akhir file
    //ios::binary  

    myfile.open("data.txt",ios::in); 
    while(!isdata){
    getline(myfile,buffer);
    output.append("\n" + buffer);
        if(buffer == "data"){
            isdata = true;
        }
    } 
    
    cout << output << endl;

    getline(myfile,buffer);
    cout << buffer << endl;
    int jumlah_data = 0;
    while(!myfile.eof()){
        myfile >> nomer;
        myfile >> nama_kalian;  
        cout << nomer << endl;
        cout << nomer << "\t" << nama_kalian << endl;
        jumlah_data++;
        //cout << "nomer = " << nomer << " nama_kalian = " << nama_kalian << endl;
    }
    cout << "Jumlah Data = " << jumlah_data << endl;

    cin.get();
    return 0;
}