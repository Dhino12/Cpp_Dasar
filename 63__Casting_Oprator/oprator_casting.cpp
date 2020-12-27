#include <iostream>
using namespace std;

int main(){

    int a = 5;
    float b = 6.67f;
    char c = 'd'; 

    //Oprator Casting 
    cout << "====== float to float =========" << endl;
    cout << "float to float = " << (float)a + b << endl << endl;
    
    cout << "====== Int to float =========" << endl;
    cout << "int to float   = " << a + b << endl << endl;
    
    cout << "====== Int to Int =========" << endl;
    cout << "Int to Int     = " << a + (int)b << endl << endl; 

    cout << "====== Char to Int =========" << endl;
    cout << "Char to Int    = " <<  c + a<< endl;
    cout << "Nilai Char     = " << (int)c << endl << endl;
    
    cout << "====== Int to Char =========" << endl;
    cout << "int to char    = " <<  (char)(c + a)<< endl << endl; 

    cout << "===================================" << endl;
    int hasil;
    hasil = a / b;
    cout << "Int to Float to Int = " << hasil << endl;
    cin.get();
    return 0;
}