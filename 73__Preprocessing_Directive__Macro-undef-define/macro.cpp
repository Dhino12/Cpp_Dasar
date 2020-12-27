//Preprocessing Directive (#)
#include <iostream>

//Macro Merubah nilai dengan nama
#define PI 3.14
#define BAHASA "Indonesia"

//Macro untuk Fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B)
#define MAX2(A,B) ((A > B) ? A:B)
//akhir dari PreProcessing Dircetive

using namespace std;

int main(){
    cout << "Nilai PI = " << PI << endl;
    cout << "Bahasa = " << BAHASA << endl; 
    cout << "Kuadrat = " << KUADRAT(7) << endl;
    //Ternary Fungsi (Oprator ?)
    cout << "Max = " << ((5 > 3) ? 5 : 3) << endl;
    cout << "Max2 = " << MAX2(4,9) << endl;

    #undef BAHASA
    // cout << BAHASA << endl; //akan error 
    #define BAHASA "inggris"
    cout << BAHASA << endl;
    
    cin.get();
    return 0;
}