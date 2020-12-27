#include <iostream>
#include <fstream>
#include <string>

using namespace std;
    
int main()
{   

    string text = "Hello cplusplus forum!";

    ofstream outfile("binary.txt", ofstream::binary);
    unsigned int size = text.size();                                 // get the size
    outfile.write(reinterpret_cast<char *>(&size), sizeof(size)  );  // write it to the file
    outfile.write( text.c_str(), text.size() );                      // write the actual text 
    outfile.close();


    //----------------------------------------

    ifstream infile("binary.txt", ifstream::binary);
    
    // read the size
    size = 0;        
    infile.read(reinterpret_cast<char *>(&size), sizeof(size)  );
    
    // Allocate a string, make it large enough to hold the input
    string buffer;
    buffer.resize(size);
    
    // read the text into the string
    infile.read(&buffer[0],  buffer.size() );
    infile.close();    
    
    cout << "buffer = \n" << buffer << '\n';
    
}