#include <iostream>
#include <array>
using namespace std;
void printarray(int *ptrarray, int baris ,int kolom ){
    int index = 0;
    for(int i = 0; i < baris ; i++){
    cout << "[ " ;
        for(int j = 0; j < kolom ; j++){
            cout << *(ptrarray + index) << " " ;
            index++;
        }
        cout << "]" << endl;
        
    }
}

int main() {

    // Array MultiDimensi 2
    //int array[baris][kolom] = {1,2,3,4,5};
    const int a = 4;
    const int b = 4; 
    int arrayMD[a][b] = {1,2,3,4,5,6,7,8};
    
    printarray(*arrayMD, 4 ,4 );
    cin.get();
    return 0;
}