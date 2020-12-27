#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 3;
    bool hasil1, hasil2;

    //komparasi, relation expression 

    //sebanding ==
    hasil1 = (a == b);
    cout << hasil1 << endl;

    //Tidak sebanding !=
    hasil2 = (a != b);
    cout << hasil2 << endl; 

    //Kurang dari <
    hasil1 = (a < b);
    cout << hasil1 << endl;

    //Lebih Dari >
    hasil2 = (a > b);
    cout << hasil2 << endl;

    //Lebih Dari Sama dengan >=
    hasil1 = (a >= b);
    cout << hasil1 << endl;

    //Kurang Dari Sama dengan =>
    hasil2 = (a <= b);
    cout << hasil2 << endl;

cin.ignore();
cin.get();
return 0;
}