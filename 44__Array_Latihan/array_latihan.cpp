#include <iostream>
#include <array> 
using namespace std ;

int main(){
    array <int,11> nilai;

    cout << "Program Menampilkan Grafik Nilai " << endl << endl;
    for(int i = 0 ;i <= nilai.size() ;i++){
        if( i == 0){
            cout << " Jumlah Nilai = ";
            cout << "0 - 9: " ;
        }else if( i == 10 ){
            cout << " Jumlah Nilai = ";
            cout << " 100 : " ; 
        }else if(i == 11){ 
            continue;
        }else{
            cout << " Jumlah Nilai = ";
            cout << i * 10  << "-" << (i*10) + 9 << ": " ; 
        }
            cin >> nilai[i];
    }
    cout << "============================================= " << endl;
    cout << "Program Menampilkan[OUTPUT] Grafik Nilai " << endl;
    cout << "Array Size : " << nilai.size() << endl << endl;

    for(int i = 0 ; i <= nilai.size() ;i++){
        if( i == 0){
            cout << "0 - 9: " ;
        }else if( i == 10 ){
            cout << "100  : " ;  
        }else if(i == 11){
            continue;
        } else{
            cout << i * 10  << "-" << (i*10) + 9 << ": " ; 
        }  
        for(int bintang = 0 ;bintang < nilai[i]; bintang++){
            cout << "*";
        }
        cout << endl;
    }  
    cin.get();
    return 0;
}
