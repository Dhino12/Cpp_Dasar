#include <iostream>
#include <array> 
#include <algorithm>
using namespace std;

    const size_t arraysize =  10;
    void printarray(array <int, arraysize> &angka ){
        cout << "Array: " ;
        for(int &a : angka){
            cout << a << " ";
        }
        cout << endl;
    }

    void printarray(array <char, arraysize> &huruf ){
        cout << "Array: " ;
        for(char &a : huruf){
            cout << a << " ";
        }
        cout << endl;
    }
int main(){
    array <int ,arraysize> angka = {9,4,6,7,8,1,3,2,5,0};
    array <char , arraysize> huruf = {'c','h','j','e','t','r','y','v','b','a'};

    printarray(angka);
    printarray(huruf);

    cout << endl;

    sort(  angka.begin(), angka.end()   );
    printarray(angka);

    sort(  huruf.begin(), huruf.end()    );
    printarray(huruf); 
    

    cin.get();
    return 0;
}