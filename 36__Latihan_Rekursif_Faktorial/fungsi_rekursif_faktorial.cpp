#include <iostream>
using namespace std;
    int faktorial(int n);
int main(){
    int angka ,hasil;
    cout << "Menghitung Faktorial Dari = ";
    cin >> angka ;
    
    hasil = faktorial(angka);
    cout << "\nMaka Hasil Faktorial = " << hasil << endl;
}
int faktorial(int n){
    if (n <= 1){
        cout << n;
        return n;
    }else {
        cout << n;
        cout << "*";
        return n * faktorial(n - 1);
    }
}