#include <iostream>
using namespace std;
    int fibonaci(int n); 

int main(){
    int angka ,hasil ;
    cout << " Menghitung Fibonacci ke -n = ";
    cin >> angka ;
    
    hasil = fibonaci(angka);
    cout << " Nilai Adalah = ";
    cout << hasil << endl;

    cin.get();
    return 0;
}
int fibonaci(int n){
    cout << " Fibonaci = " << n << endl;
    if ((n == 0) || (n == 1)){
        return n;

    }else {
        return fibonaci(n - 2) + fibonaci (n - 1);
    }
}