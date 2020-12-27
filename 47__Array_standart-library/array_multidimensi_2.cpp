#include <iostream>
#include <array>
using namespace std;
    const int baris = 4;
    const int kolom = 3;

void printarray(array < array <int,kolom> ,baris >nilaiArray){
    for( array <int,kolom> vectorbaris: nilaiArray){
        cout << "[ ";
        for(int nilaikolom: vectorbaris){
            cout << nilaikolom << " ";
        }
        cout << "]"<< endl;
    }
}

int main(){
    array < array <int,kolom> ,baris > nilaiMD = {1,2,3,4,5};
    printarray(nilaiMD);


    cin.get();
    return 0;
}