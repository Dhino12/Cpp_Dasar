#include <iostream>
#include <string>
using namespace std;

void printdata(int val){
    cout <<"Ini Void = " << val << endl;
}

int main() {
    
    //(exception1,exception2)
    int a;
    int b;
    int c;
    
    a = (b=5, printdata(b), cout << "b = " << b << endl, c=3, printdata(c), cout << "c = " << c << endl, (c+b));  

    cout << "a = " << a << endl;

    cin.get();
    return 0;
}