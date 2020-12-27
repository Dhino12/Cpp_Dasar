#include <iostream>
#include <cstdlib> //fungsi random
using namespace std;

int main(){
    for( int i = 0 ; i < 10 ; i++){
        cout << 1 + ( rand() %6 ) << endl << endl;
    }

    while (true)
    {   
        char lanjut;
        cout << "lempar dadu ? (y/n)";
        cin >> lanjut;
        
        if (lanjut == 'y'){
        cout << 1 + ( rand() %6 ) << endl << endl;
        }
        else if (lanjut == 'n')
        {
            break;
        }
        else {
            cout << " Warning Ketik Y atau N \n";
        }
    }
    
    cin.get();
    return 0;

}
