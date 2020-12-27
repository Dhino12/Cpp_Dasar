#include <iostream>
#include <array> //Pake baris Ke 11
using namespace std;

int main(){
    // Looping untuk Array di c++ 11 Keatas
    /* for(Tipe data declaration variable : NAMAarray){
        statment
    }
    */
    //array <int,10> arraynilai = {0,1,2,3,4,5,6,7,8,9};
    int arraynilai [10] = {0,1,2,3,4,5,6,7,8,9};
    for ( int nilai : arraynilai ){
        cout << "Address = "  << &nilai  << " Nilai : " << nilai << endl;
        nilai = 2; //tidak merubah Address array
    }

    cout << endl;  
    // Manipulasi Array dengan Refrensi
    for ( int &nilaib : arraynilai ){
        nilaib *= 2;  //Menggunakan Assigment Oprator(WAJIB)
        //cout << "Address = "  << &nilaib  << " Nilai : " << nilaib << endl;
        
    }

    cout << endl;  
    for ( int &nilaib : arraynilai ){ //REFRENCE
        cout << "Address = "  << &nilaib  << " Nilai : " << nilaib << endl;
        
    }
    cin.ignore();
    cin.get();
    return 0;
}