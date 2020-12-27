#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 4;

    bool hasil; 
    // Oprator Logika : or ,not ,and 

    // not !
    cout << "Untuk Not" << endl;
    hasil = !(a == 3);
    cout << hasil << endl;

    //and  &&
    // salah satu nilai false akan menghasilkan false
    cout << "untuk AND" << endl;
    hasil = (a == 3) and (b == 4); //true and true
    cout << hasil << endl; 
    hasil = (a == 4) && (b == 4); //fales and true
    cout << hasil << endl; 
    hasil = (a == 3) and (b == 3);// true and false
    cout << hasil << endl; 
    hasil = (a == 4) && (b == 3);//false and false
    cout << hasil << endl; 
    
    //or ||
    // salah satu nilai true akan menghasilkan true
    cout << "untuk OR" << endl;
    hasil = (a == 3) or (b == 4); //true and true
    cout << hasil << endl; 
    hasil = (a == 4) || (b == 4); //fales and true
    cout << hasil << endl; 
    hasil = (a == 3) or (b == 3);// true and false
    cout << hasil << endl; 
    hasil = (a == 4) || (b == 5);//false and false
    cout << hasil << endl; 

    cin.ignore();
    cin.get();
    return 0;
}