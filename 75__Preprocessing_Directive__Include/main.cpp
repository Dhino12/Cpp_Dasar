#include <iostream>
using namespace std;
//mengambil file yang satu folder 
#include "library.h"

int main(){
    cout << "Berhasil" << endl;
    cout << "PI = " << PI << endl;
    cout << "KUADRAT = " << KUADRAT(3) << endl;
    cout << "MAX = " << MAX(3,2) << endl;
    cout << "Data String = " << data << endl;
    cin.get();
    return 0;
}