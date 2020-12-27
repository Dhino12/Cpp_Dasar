#include <iostream>
using namespace std;
//Reporter
int kuadrat(int a ){ //Fungsi Kembalian
    int b;
    b = a * a;
    return b;
}
//Worker
void tampilkan (int input){
    cout << " Menampilkan Void \n";
    cout << input << endl;

}
int main(void){
    int input , a ,hasil;
    cout << " Masukan Nilai : ";
    cin >> input;
    hasil = kuadrat(input);
    tampilkan (hasil); // Tidak Punya Tipe Data (Void)

    cin.get();
    return 0;
}