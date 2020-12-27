#include <iostream>
#include <string>
using namespace std;

int main(){
    //Perbandingan String 
    string input;
    string katarahasia("ucup");
    //char [4] = {'u','c','u','p'};//tidak bisa membandingkan kata
    //char pembanding[4] = {'u','c','u','p'};//tidak bisa membandingkan kata
    
    while(true){
        cout << "Tebak Nama = ";
        cin >> input;
        cout << "Nama Yang dimasukan Adalah " << input << endl; 

        if(input == katarahasia){
            cout << "Tebakan Anda Benar " << endl << endl;
            break;
        }else{
            cout << "Tebakan Anda Salah " << endl << endl;
        }
    }
    cout << "Program Selesai" << endl;

    cin.get();
    return 0;

}