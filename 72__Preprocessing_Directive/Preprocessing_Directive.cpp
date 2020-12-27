#include <iostream>
using namespace std;
//  Macro  //
#define id 3.14
double ID = 3.14;

int main(){
    //PreProcessing (#define) tidak bersangkutan dengan memory
    cout << "#define = " << id << endl;
    cout << "double = " << ID << endl;
    cout << "Address double = " << &ID << endl;

    cin.get();
    return 0;
}