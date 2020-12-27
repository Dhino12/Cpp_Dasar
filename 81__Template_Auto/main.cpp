#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <typename T, typename U>
auto max(T a, U b){
    return (a > b ) ? a : b;
}

int main() {
    int a = 15;
    string b = "test";
    double c = 14.5f;
    float d = 12.1f;
    //otomatis mendeteksi tipe data terbesar 
    auto e = max(c,a);

    cout << a << "\tTipe = " << typeid(a).name() << endl;
    cout << b << "\tTipe = " << typeid(b).name() << endl;
    cout << c << "\tTipe = " << typeid(c).name() << endl;
    cout << d << "\tTipe = " << typeid(d).name() << endl;
    cout << e << "\tTipe = " << typeid(e).name() << endl;

    cout << "Size Dari Masing - Masing Tipe Data " << endl;
    cout << "int \t= " << sizeof(a) << endl;
    cout << "string \t= " << sizeof(b) << endl;
    cout << "double \t= " << sizeof(c) << endl;
    cout << "float \t= " << sizeof(d) << endl;
    cout << "auto \t= " << sizeof(e) << endl;
    cin.get();
    return 0;
}