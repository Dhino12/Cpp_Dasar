#include <iostream>
using namespace std;

int main(){
    //Membuat Array
    int nilai[5]; // = {0,1,2,3,4}
    nilai [0] = 0;
    nilai [1] = 1;
    nilai [2] = 2;
    nilai [3] = 3;
    nilai [4] = 4;

    cout << "============================================" << endl;
    cout << &nilai[0] << " Nilainya adalah = " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah = " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah = " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah = " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah = " << nilai[4] << endl;
    cout << "Size Dari Int = " << sizeof(int) << endl;
    int *pointer = nilai;
    *(pointer + 2) = 6; //merubah value dari nilai[2]
    nilai[3] = 7; //merubah value dari nilai[3]
    
    cout << "============================================" << endl;
    cout << &nilai[0] << " Nilainya adalah = " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah = " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah = " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah = " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah = " << nilai[4] << endl;
    cout << "============================================" << endl;
    cout << "Ukuran Array = " << sizeof(nilai)  << " byte" << endl;
    cout << "Jumlah Member Array = " << sizeof(nilai ) / sizeof(int) << endl;

    cin.get();
    return 0;
}