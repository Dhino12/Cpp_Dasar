#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printbinary(unsigned short val ,string nama){

    cout << nama << " = " << bitset<8>(val) << endl;
}
/*
        Bitwise Oprator 
&    =>    AND  Bitwise AND
|    =>    OR   Bitwise Inclusive OR
^    =>    XOR  Bitwise XOR
~    =>    Not
<<   =>    SHL  Shift   Bits Left
>>   =>    SHR  Shift   Bits right
*/

int main(){
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "^ => Bitwise XOR" << endl;
    //Jika salah satu(a atau b) true maka akan menghasilkan true
    //jika keduanya(a dan b) true akan menghasilkan false
    c = a ^ b; 
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cout << "& => Bitwise AND" << endl;
    //Lebih kearah false
    c = a & b; 
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cout << "| => Bitwise OR" << endl;
    c = a | b; 
    printbinary(a,"a");
    printbinary(b,"b");
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cout << "~ => Bitwise NOT" << endl;
    //Kebalikan 
    c = ~a; 
    printbinary(a,"a"); 
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cout << "<< => Bitwise SHL" << endl;
    //Menggeser nilai ke kiri
    c = a << 2; 
    printbinary(a,"a"); 
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cout << ">> => Bitwise SHR" << endl;
    //Menggeser nilai ke kiri
    c = a >> 2; 
    printbinary(a,"a"); 
    printbinary(c,"c");
    cout << "C= " << c << endl;
    cout << endl;

    cin.get();
    return 0;
}