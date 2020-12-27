#include <iostream>
using namespace std;

int main()
{
    typedef int I;
    typedef int iVector2D[2];
    typedef unsigned long ulong;
    typedef double vector[2];

    using numbers = double;

    I a = 10;
    iVector2D b = {1,2};
    ulong c = 1211212;
    vector d = {10.101,15.131};
    numbers e = 10.212121;

    cout << "Nilai A = " << a << endl;
    cout << "Nilai b = " << b[0] << " dan " << b[1] << endl;
    cout << "Nilai A = " << c << endl;
    cout << "Nilai d = " << d[0] << " dan " << d[1] << endl;
    cout << "Nilai e = " << e << endl;

    cin.get();
    return 0;
}
