// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;
/*tellg() dan tellp() 
    Mengembalikan nilai integer yang menunjukan posisi dari
    get stream pointer dan put stream pointer */
/*seekg() dan seekp()
    Member function ini untuk mengatur posisi get stream pointer dan put
    streampointer dengan prototypes:
        seekg ( pos_type position );
        seekp ( pos_type position );
    dengan nilai relatif terhadap begin of file.atau
        seekg ( off_type offset , seekdir direction );
        seekp ( off_type offset , seekdir direction );
    dengan relatif parameter berikut :
        ios::beg offset specified from the beginning of the stream
        ios::cur offset specified from the current position of the stream pointer
        ios::end offset specified from the end of the stream*/
        
int main () {
    long begin,end; 
    ifstream myfile ("example.txt");
    begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    end = myfile.tellg();
    myfile.close(); 

    cout << endl;
    cout << "size is begin = " << begin << endl;
    cout << "size is end   = " << end << endl;
    cout << "size is gabungan: " << (end-begin) << " bytes.\n";
    cout << endl;
    return 0;
}