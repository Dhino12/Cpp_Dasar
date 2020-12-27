#include <iostream>
using namespace std;

int main(){
    //variable
    int a = 5; 
    cout << "============================ " << endl;
    cout << "Address dari A = " << &a << endl;
    cout << " Nilai dari A = " << a << endl << endl;

    //reference 
    int &b = a;
    cout << " nilai dari B = " << b << endl;
    cout << "Address dari B = " << &b << endl << endl;

    a = 10;
    cout << " nilai dari A = " << a << endl;
    cout << " nilai dari B = " << b << endl << endl;

    b = 20;
    cout << " nilai dari A = " << a << endl;
    cout << " nilai dari B = " << b << endl;

    cin.get();
    return 0;
}