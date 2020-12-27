#include <iostream>
#include <array>
#include <exception>
using namespace std;

/*  
1. Syntax Error (kurang ;),(kurang ())
2. Linking Error (Tidak ada default argument ,hanya ada prototype)
    (tipedata tidak sama)
3. Non Error
4. Runtime Error 
*/

int kuadrat(int &value);
// void print (char b);
int luas(int &panjang ,int &lebar);
int pembagian(int &num ,int &denum){
    if(denum == 0){
        throw overflow_error("Error : Pembagi Nol"); 
        // throw "Error : Pembagi Nol"; 
    }
    return num / denum;
}
int main(){  
    int a = 10;
    int b = -5;
    int c = kuadrat(a);
    // print('b');
    int d = luas(a,b); //  3. Non Error

    cout << c << endl;
    cout << a << endl;

    //4. Runtime Error
    // array<int,5> e = {0,1,2,3,4};
    // cout << e.at(5) << endl; 

    // array<int,5> e = {0,1,2,3,4};
    // try{
    //     cout << e.at(5) << endl;
    //     /* code */
    // }
    // catch(exception &e){
    //     cout << e.what() << endl;
    // }
    // cout << "Akhir Dari Program " << endl;
    while (true)
    {
        int e;
        int f;
        int g;
        cout << "Num = " ;
        cin >> e ;
        cout << "Denum = ";
        cin >> f;
        try{
            g = pembagian(e,f);
            cout << g << endl;
        }
        // catch(const char *h)
        catch(exception &h){
            cout << h.what() << endl;
            // cout << h << endl;
        }
        /* code */
    }

    cin.get();
    return 0;
}

int luas(int &panjang, int &lebar){
    return panjang*lebar;
}
int kuadrat(int &value){
    return value*value;
}
