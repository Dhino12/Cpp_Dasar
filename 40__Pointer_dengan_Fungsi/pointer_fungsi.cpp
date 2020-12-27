#include <iostream>
using namespace std;
//Prototype
void fungsi(int *);
void kuadrat(int *);

int main(){
    int a ;
    cout << " Masukan nilai A = ";
    cin >> a;
    cout << "Address A = " << &a << endl;
    cout << " Nilai A = " << a << endl;
    fungsi(&a);  //fungsi dengan input pointer 
    kuadrat(&a);
    cout << " Nilai A = " << a << endl;
    cin.get();
    return 0;
}

//Function (Method)
void fungsi(int *b){
    cout << "Address B = " << b << endl;
    cout << " nilai B = " << *b << endl; //derefrencig 

}
void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}
