#include <iostream>
using namespace  std;


int main(){
    
    union data{
        int a;
        char b[4];
        
    };
    data data_union;
    int i = 0 ;
    
    data_union.a = 10;
    cout  << "sizeof_int = " << sizeof(data_union.a) << " byte"<< endl;
    cout << "Data A = " << data_union.a << endl; 
    cout << "Data B = " << data_union.b << endl;
    
    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd'; 
    
    cout << "Data A = " << data_union.a << endl;
    cout << "Data B = " << data_union.b << endl;
    

    cin.get();
    return 0;
}