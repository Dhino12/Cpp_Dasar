#include <iostream>
#include <array>
//#include <algorithm>
using namespace std;

int main(){
    //Array dengan standar libray
    //array<int ,jumlah array> nama array

    array < int ,5 > nilai;

    for(int i = 0 ; i <= 4; i++){
        nilai[i] = i;
        cout << " Nilai [" << nilai[i] << "] = " << i ;
        cout << " Address : " << &nilai[i] << endl;
    }
    //ukuran nilai Array
    cout << "Nilai Array = " << nilai.size() << endl;
    //address awal Array 
    cout << "Address Awal = " << nilai.begin() << endl;
    //address akhir Array
    cout << "Address Akhir = " << nilai.end() << endl;
    //nilai dengan index
    cout << "Nilai ke 2 = " << nilai.at(2) << endl;

    cin.get();
    return 0;
}