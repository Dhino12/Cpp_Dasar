#include <iostream>
using namespace std;
double hitungluas(double p, double l){
    double luas = p * l;
    return luas;
}
double hitungkeliling(double p,double l){
    double keliling = 2 * p + l;
    return keliling;
}
void tampilkanluas(double p, double l){
    cout << "====== Menggunakan Void ===== \n";
    cout << " Luas adalah = ";
    cout << hitungluas(p,l) << endl;
}
int main(){
    double panjang ,lebar;
    cout << " Masukan Panjang : ";
    cin >> panjang;
    cout << " Masukan Lebar : ";
    cin >> lebar; 

    tampilkanluas(panjang,lebar);
    cout << "====== Menggunakan Fungsi ===== \n";
    cout << " Keliling adalah = ";
    cout << hitungkeliling(panjang, lebar) << endl << endl;
    
    cin.get();
    return 0;
}