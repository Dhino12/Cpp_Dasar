#include <iostream>
#include <string>
using namespace std;

int main(){
    char kata2[6] = {"mobil"}; //(Tidak bisa ditambah karena Array(FIKS)) 
    cout << kata2 << endl;
    
    
    string kata("Mobil");
    cout << kata << endl;

    string data;
    cout << "Masukan Kata / Kalimat " ;
    cin >> data;
    cout << "data yang dimasukan = ";
    cout << data << endl;

    cin.get();
    return 0;
}