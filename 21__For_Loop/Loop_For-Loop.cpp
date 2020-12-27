#include <iostream>
using namespace std;

int main(){ 
        /*for(Inisialisasi ;Loop Kondisi ;Increment){
            statement}
        */
        cout << "\n Loop 1 \n" ;  //Increment
        for(int i = 1; i <= 10; i++){
            cout << i << endl;
        } 
        cout << "\n Loop 2 \n" ;  //Assignment_Oprator
        for(int f = 1; f <= 10; f += 2){
            cout << f << endl;
        } 
        cout << "\n Loop 3 \n" ; //Decrement
        for(int g = 1; g >= -10; g-- ){
            cout << g << endl;
        } 
        cout << "\n Loop 4 \n" ; //Campuran (Compawn)
        int total = 0;
        for(int g = 1; g <= 10; g++ ,total += g){
            cout << g << " || " << total << endl;
        } 

    cin.get();
    return 0;
}
