#include <iostream>
using namespace std;

int kuadrat(int x ){
    int y;
    y = x * x;
    return y;
}
int tambah ( int a ,int b){
    return a + b;
}
int kurang ( int d ,int e){
    int f;
    f = d - e;
    return f;
}
float bagi ( float g ,float h){
    float i;
    i = g / h;
    return i;
}
int kali ( float j,float k){
    float l;
    l = j * k;
    return l;
}

int main(void){

    double input ,masukan ,hasil ,a ,b ,hasil2 ,d ,e ,hasil3 ,g ,h ,hasil4, j, k ,hasil5 ;
    cout << " Nilai Kuadrat dari : ";
    cin >> input ;
    hasil = kuadrat( input );
    cout << " Hasil kuadrat : " << hasil << endl << endl; 

    cout << " Nilai Kuadrat dari : " << hasil ; 
    hasil = kuadrat( hasil );
    cout << "\n Hasil kuadrat : " << hasil << endl << endl; 

    cout << " Masukan Nilai A : ";
    cin >> a;
    cout << " Masukan Nilai B : " ;
    cin >> b; 
    hasil2 = tambah(a,b);
    cout << " Hasil dari A + B = " << hasil2 << endl << endl;

    cout << " Masukan Nilai D : ";
    cin >> d ;
    cout << " Masukan Nilai E : ";
    cin >> e;
    hasil3 = kurang(d,e);
    cout << " Hasil Dari D - E : " << hasil3 << endl << endl;

    cout << " Masukan Nilai G : ";
    cin >> g;
    cout << " Masukan Nilai H : ";
    cin >> h;
    hasil4 = bagi(g,h);
    cout << " Hasil Dari G / H = " << hasil4 << endl << endl;

    cout << " Masukan Nilai j : ";
    cin >> j;
    cout << " Masukan Nilai k : ";
    cin >> k;
    hasil5 = kali(j,k);
    cout << " Hasil Dari j * k = " << hasil5 << endl << endl;

    cin.get();
    return 0;
}