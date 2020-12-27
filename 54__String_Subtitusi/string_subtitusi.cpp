#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat1("hanya test saja ,");
    string kalimat2("wakanda forevah!!");

    cout << "=============================== " << endl;
    cout << "1." << kalimat1 << endl;
    cout << "2." << kalimat2 << endl << endl;

    //swap string 
    cout << "======== Swap String ========== " << endl;
    kalimat1.swap(kalimat2);
    cout << "1." << kalimat1 << endl;
    cout << "2." << kalimat2 << endl << endl ;

    //Replace String (Mengganti String ) 
    //variable.replace(index,panjang,"isi string")
    cout << "======== Replace String ========== " << endl;
    kalimat2.replace(6,4,"Percobaan"); 
    kalimat1.replace(kalimat1.find("ah"),2,"er");//mengganti kata forevah = forever 
    cout << "1." << kalimat1 << endl;
    cout << "2." << kalimat2 << endl << endl ;

    //Insert String (menambahkan kata)
    kalimat1.insert(8,"dan "); 
    cout << "======== Insert String ========== " << endl;
    cout << "1." << kalimat1 << endl;
    cout << "2." << kalimat2 << endl;

    cin.get();
    return 0;
}