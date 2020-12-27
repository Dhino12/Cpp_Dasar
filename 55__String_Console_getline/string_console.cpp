#include <iostream>
#include <string> 
using namespace std;

int main(){
    string kalimat_input;
    //getline(cin,variable);
    cout << "=============================== " << endl;
    cout << "Masukan Kalimat = ";
    getline(cin,kalimat_input);
    cout << "Input Anda = " << kalimat_input << endl;

    // Jumlah Kata Dari Input 
    int posisi = 0;
    int jumlah = 0;

    while(true){
        posisi = kalimat_input.find(" ",posisi + 1);
        jumlah++;
        //cout << "Posisi = " << posisi << endl;
        //cout << "Jumlah = " << jumlah << endl;

        if(posisi < 0){
            break;
        }
    }
    cout << "Jumlah Kata = " << jumlah << endl;

    cin.get();
    return 0;
}