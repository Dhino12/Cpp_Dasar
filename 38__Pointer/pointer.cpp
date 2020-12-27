#include <iostream>
using namespace std;

int main(){
    // int a mempunyai nilai dan alamat (address)
    int a = 5;
    //pointer 
    int  *aPtr = &a;
    //NULL pointer 
    int *apointer = nullptr; 
    //Deferenceing ,mengambil data dari pointer


    cout << "nilai dari A = " << a << endl;
    cout << "Alamat Dari A = " << aPtr << endl;
    cout << "Alamat Dari A(null) = " << apointer << endl;
    cout << "Mengambil nilai dari Pointer = " << *aPtr << endl;
    cout << "Size Dari int = " << sizeof(int) << " byte "<< endl;
    cin.get();
    return 0;
}