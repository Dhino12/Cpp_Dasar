#include <iostream>
#include <limits>
using namespace std;
int main(){
    int b = 5;
    long long c = 6; 
    short d = 7;
    float e = 1.6; //Bilangan Decimal
    double f = 2.5; //Bilangan Decimal
    //char g = "Hai Hallo"; //Character
    bool h = true ; //True Atau False

    //Int
    cout << "============ Int =============" << endl;
    cout << b << endl;
    cout << "Nilai int      = " << sizeof(b) << " byte" << endl;
    cout << "Nilai Max Int  = " << numeric_limits<int>::max() << endl ;
    cout << "Nilai Min Int  = " << numeric_limits<int>::min() << endl << endl ;

    //Unsigned Int
    cout << "============ Unsigned Int =============" << endl;
    cout << b << endl;
    cout << "Nilai Unsigned Int     = " << sizeof(b) << " byte" << endl;
    cout << "Nilai Max Unsigned Int = " << numeric_limits<unsigned int>::max() << endl ;
    cout << "Nilai Min Unsigned Int = " << numeric_limits<unsigned int>::min() << endl << endl ;

    //Long
    cout << "============ Long =============" << endl; 
    cout << c << endl;
    cout << "Nilai long      = " << sizeof(c) << " byte" << endl;
    cout << "Nilai Max long  = " <<  numeric_limits<long long>::max() << endl ;
    cout << "Nilai Min long  = " << numeric_limits<long long>::min() << endl << endl;

    //short
    cout << "============ Short =============" << endl;
    cout << d << endl;
    cout << "Nilai short      = " << sizeof(d) << " byte" << endl;
    cout << "Nilai Max Short  = " << numeric_limits<short>::max() << endl ;
    cout << "Nilai Min Short  = " << numeric_limits<short>::min() << endl << endl ;

    //float
    cout << "============ Float =============" << endl;
    cout << e << endl;
    cout << "Nilai Float      = " << sizeof(e) << " byte" << endl;
    cout << "Nilai Max float  = " << numeric_limits<float>::max() << endl ;
    cout << "Nilai Min float  = " << numeric_limits<float>::min() << endl << endl ;

    //double
    cout << "============ double =============" << endl;
    cout << f << endl;
    cout << "Nilai double      = " << sizeof(f) << " byte" << endl;
    cout << "Nilai Max double  = " << numeric_limits<double>::max() << endl ;
    cout << "Nilai Min double  = " << numeric_limits<double>::min() << endl << endl ;

    //Boolean
    cout << "============ Boolean =============" << endl;
    cout << h << endl;
    cout << "Nilai bool      = " << sizeof(h) << " byte" << endl;
    cout << "Nilai Max bool  = " << numeric_limits<bool>::max() << endl ;
    cout << "Nilai Min bool  = " << numeric_limits<bool>::min() << endl << endl ;

    //Signed Char
    cout << "============ Signed Char =============" << endl;
    cout << h << endl;
    cout << "Nilai signed char      = " << sizeof(h) << " byte" << endl;
    cout << "Nilai Max signed char  = " << numeric_limits<signed char>::max() << endl ;
    cout << "Nilai Min signed char  = " << numeric_limits<signed char>::min() << endl << endl ;

    cin.get();
    return 0;
}