#include <iostream>
using namespace std; 
    
    int x = 10; //Variable Global ::x {Tidak boleh doble}
    int ambil_global(){//Mengambil Variable Global
        return x;
    }
    int x_local (){ // Variable Local scopnya x_local()
        int x = 5;
        return x;
    }
int main (){

    cout << "1. Variable Global : " << x << endl;      
    int x = 8; //Variable Local untuk Main 
    cout << "2. Variable Local Main : " << x << endl;
    cout << "3. Variable Ambil Global : "<< ambil_global() << endl; 
    cout << "4. Variable Local Main : " << x << endl; 
    cout << "5. Variable Local x_local : " << x_local() << endl;
    cout << "6. Variable Local Main : " << x << endl; 

    cout << "7. Variable Local Main : " << x << endl;
    if (true){
    cout << "8. Variable Local Main : " << x << endl;
        //Block Scope 
        int x = 1;
    cout << "9. Variable Local block : " << x << endl;
    cout << "10. Variable Global : " << ::x << endl; //Mengambil Global paling atas
    }
    cout << "11. Variable Local Main : " << x << endl;
cin.get();
return 0;
    }