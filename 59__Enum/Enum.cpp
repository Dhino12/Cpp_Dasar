#include <iostream>
using namespace std;
//Prototype
    enum warna {merah ,putih ,hitam ,coklat = 5 ,kuning ,biru };

int main(void){

    warna kain;
    kain = hitam;
    cout << kain << endl;

    if(kain == hitam){
        cout << "Warna Kain = hitam " << endl;
    }

    cin.get();
    return 0;
}