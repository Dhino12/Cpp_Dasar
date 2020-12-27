#include <iostream>
using namespace std;

int main(){ 
    // matriks[baris][kolom][kedalaman]
    //array dimulai dari 0
    int matriks[2][3][4] = 
    {    //kolom 1      //Kolom 2     //kolom 3
        { {7,4,12,3} , {-9,29,3,11} ,{6,34,23,20} } ,//baris 1
        { {6,15,1,5} , {17,8,-3,15} ,{99,-1,44,9} }  //baris 2
    }; 
    for(int i = 0 ;i < 2 ;i++){
        for(int j = 0; j < 3 ; j++){
            for(int k = 0 ; k < 4 ;k++){
                cout << "Matriks a[" << i << "][" << j << "][" << k << "] = ";
                cout << matriks[i][j][k] << endl;
            }
        }
    }
    cin.get();
    return 0;
}