#include <iostream>
using namespace std;
//Fungsi Rekursif Terbatas
int pangkatiterasi(int a ,int b ){
    int hasil = a;
    for(int i = 1 ; i < b ; i++){
        hasil = hasil * a;
    }
    return hasil;
}

//Fungsi Rekursif Terbatas
int pangkatrekursif(int a ,int b){
    if (b <= 1){
        cout << " Akhir Dari Rekursif \n";
        return a;
    }else
    {   cout << " Rekursif \n";
        return a * pangkatrekursif(a ,(b - 1));
    }
    

}

int main(){

    int a ;
    int b;
    cout << " Masukan Angka = ";
    cin >> a ;
    cout << " Pangkat = ";
    cin >> b;
    cout << " Hasil Literasi " << pangkatiterasi(a,b) << endl;
    cout << " Hasil Rekursif " << pangkatrekursif(a,b) << endl;

    cin.ignore();
    cin.get();
    return 0;
}