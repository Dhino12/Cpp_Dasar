#include <iostream>
#include <cmath>
using namespace std;
/* Library cmath : reference www.cppreference.com
ceil(x)         <--     Pembulatan Keatas
cos(x)          <--     Cosinus 
exp(x)          <--     eksponen
fabs(x)         <--     nilai absolute 
floor(x)        <--     Pembulatan Kebawah
fmod(x)         <--     modulus dalam float 
log(x)          <--     logaritma dengan basis natural
log10(x)        <--     Logaritma dengan basis 10
pow(x,y)        <--     x pangkat y
sin(x)          <--     sinus
sqrt(x)         <--     akar kuadrat 
tan(x)          <--     tangen 
*/
int main(void){
    int x;
    cout << " Menghitung Akar dari X : ";
    cin >> x;

    double y = sqrt(x);
    cout << " Akar adalah : "<< y << endl;

    double a = cos(x);
    cout << " Cosinus adalah : " << a << endl << endl;
    cin.get();
    return 0;
}