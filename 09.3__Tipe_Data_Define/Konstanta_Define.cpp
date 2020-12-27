#include <iostream>
using namespace std;
    //#define namaconstanta nilai (Nilai Yang tidak bisa dirubah)
#define panjang 10 //Tanpa titik koma (;)
#define lebar 10


int main(){
    int luas ; 
    //panjang = 30; tidak berfungsi
    luas = panjang * lebar;
    cout << " Luas = " << luas << endl;

    cin.get();
    return 0;
}