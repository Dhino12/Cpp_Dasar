#include <iostream>
using namespace std;
    // overloading = menimpa

    // Basic Function
    int luaskotak(int panjang ,int lebar){
        int luas = panjang * lebar;
        return luas;
    }
    // Overload Function 
    int luaskotak(int sisi){
        int luas = sisi * sisi;
        return luas;
    }
    double luaskotak(double sisi){
        return sisi * sisi;
    }
    float luaskotak(float sisi){
        return sisi * sisi;
    }
int main(){
    cout << " Luas Kotak 2 x 3 : " << luaskotak(2,3) << endl; // Basic Function
    cout << " Luas Kotak 2 x 2 : " << luaskotak(2) << endl; // Overload Function 
    cout << " Luas Kotak 2.5 x 2.5 : " << luaskotak(2.5) << endl; // Overload Function 
    cin.get();
    return 0 ;
}