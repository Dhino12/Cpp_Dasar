#include <iostream>
using namespace std;

int main(){
    // Looping for  
    for ( int i = 0; i <= 10; i++){
        if ( i == 5 ){
            continue;
            //break;
        }
        cout << i << endl ; 
    }
    cout << " Akhir yang For " << endl << endl ;

    // Looping While  
    int f = 0;
    while (f <= 10){
        f++;
        if (f == 5){
            //break;
            continue;
        }
        cout << f << endl;
        //f++;
    } 
    cout << " Akhir yang While " << endl;
    
    cin.get();
    return 0;
}