#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,y;
    string kalimat1("Dayat Suka Olahraga yang");
    string kalimat2("Ucup Suka Makan Pisang");

    cout << "Ini Kalimat1 = " << kalimat1 << endl;
    cout << "Ini Kalimat2 = " << kalimat2 << endl;

    // Substring (Mengambil String Ditengah - tengah);
    // substr (index ,panjang)
    cout << "Masukan Index = " ;
    cin >> x ;
    cout << "Masukan Panjang = ";
    cin >> y;
    cout << kalimat1.substr(x,y) << endl;
    cout << kalimat2.substr(5,4) << endl;

    //Mencari Posisi dari Substring  (find)
    cout << "Posisi Olahraga = " << kalimat1.find("Olahraga") << endl;
    cout << "Posisi Pisang = " << kalimat2.find("Pisang") << endl;
    
    int a = kalimat1.find("ya");
    cout << a << endl;
    cout << kalimat1.find("ya", a + 1) << endl;

    //Mencari Posisi Dari Belakang (rfind)
    
    cout << kalimat2.rfind("an") << endl;

    cin.get();
    return 0;
}