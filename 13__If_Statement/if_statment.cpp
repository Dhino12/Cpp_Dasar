#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukan angka = ";
    cin >> a;

    //if statment
    //Kondisi dalam bentuk Boolean
    if (a < 3){
        cout << " hallo " << endl;
    }
    else {
        cout << "selesai" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}