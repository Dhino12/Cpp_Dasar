#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukan angka = ";
    cin >> a;

    //if statment
    //Kondisi dalam bentuk Boolean
    if (a == 5){
        cout << " Nilai Ini adalah 5 " << endl;
    }
    else if (a == 4){
        cout << " Nilai Ini adalah 4 " << endl;
    }
    else if (a == 3){
        cout << " Nilai Ini adalah 3 " << endl;
    }
    else if (a == 2){
        cout << " Nilai Ini adalah 2 " << endl;
    }
    else if (a == 1){
        cout << " Nilai Ini adalah 1 " << endl;
    }
    else {
        cout << "Bukan 5,4,3,2,atau 1" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}