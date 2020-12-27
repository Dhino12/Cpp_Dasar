#include <iostream>
using namespace std;
//Prototype
double hitungluas(double p, double l);
void println(double x);

int main(){
    double panjang ,lebar ,luas;
    cout << "Menghitung Luas Kotak" << endl;
    cin >> panjang ;
    cin >> lebar ;

    luas = hitungluas(panjang ,lebar);
    println(luas);

    cin.get();
    return 0;
}

//Default Argument
double hitungluas(double p, double l){
    return p*l;
}
void println(double x){
    cout << "Hasil = " << x << endl;
}