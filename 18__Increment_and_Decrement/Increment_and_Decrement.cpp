#include <iostream>
using namespace std;

int main(){
    //Increment_dan_Decrement
    //Pre-Increment dan Post-Increment

    int a = 5;
    int b = 7;
    int c = 9;

    //Post-Increment
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;

    //Pre-Increment
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl << endl; 

    //Decrement
    cout << c << endl;
    cout << c-- << endl; //Post-Increment
    cout << --c << endl; //Pre-Increment
    cout << c << endl;

    cin.get();
    return 0;
}