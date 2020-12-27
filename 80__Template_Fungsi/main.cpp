#include <iostream>
#include <string>
using namespace std;
// void print(data){
//     cout << data << endl;
// }

template<typename T>
void print(T data){
    cout << data << endl;
}
//merubah semua ke int
template<typename B>
int toInt(B data){
    return int(data);
}
template<typename G ,typename U>
G max(G data1, U data2){
    return (data1 > data2 ) ? data1:data2;
}

int main(){
    print(10);
    print(5.5);
    print('c');
    cout << endl;

    print(toInt(10.1010101));
    cout << toInt(10.1010101) << endl;
    cout << max(10,103.5) << endl;
    cout << endl;
    
    //Menjabarkan semua (konversi semua ke- int atau double)
    print<int>(10.15);
    cout << max<double,int>(10,103.5) << endl;

    cin.get();
    return 0;
}
