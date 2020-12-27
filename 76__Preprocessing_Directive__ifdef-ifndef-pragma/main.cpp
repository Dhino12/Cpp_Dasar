    // Compiler Tidak Mau jika #define 2x
#include <iostream>
#include "foo.h"
#include "bar.h"
#include "bersama.h"
using namespace std;
//jika di komen maka FOO tidak ada ,jika tidak maka FOO ada
// #define FOO "FOO LAMA"

//========================================== 
// //ifdef
// #ifdef FOO
//     #define TEST_FOO "FOO ada"
// #else
//     #define TEST_FOO "FOO tidak ada"
// #endif // FOO

//========================================== 
// //ifndef
// #ifndef FOO 
//     #define FOO "Membuat FOO BARU" 
// #else
//     #define FOO "Pakai FOO Lama"
// #endif 

//==========================================
//pragma once

int main() {
    Mahasiswa mahasiswa;
    mahasiswa.nim = 10;
    cout << mahasiswa.nim << endl;
    cout << FOO << endl;
    cin.get();
    return 0;
}