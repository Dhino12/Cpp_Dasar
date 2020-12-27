#include <iostream>
#include <array>
#include <algorithm>

const size_t arraysize = 11;
    void printarray(std::array <int, arraysize> &angka ){
        std::cout << "Array: " ;
        for(int &a : angka){
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }

    void printarray(std::array <char, arraysize> &angka ){
        std::cout << "Array: " ;
        for(char &a : angka){
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }
int main() {
    std::array <int ,arraysize> angka = { 9,4,5,2,1,3,7,8,6,10,11};
    printarray(angka); 
    int angkacari ;
    bool ketemu;
    //sort dulu
    //search -> binary_Search
    std::cout << "Mencari Angka Dalam Array Diatas = ";
    std::cin >> angkacari;
    
    std::sort(angka.begin() ,angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), angkacari);
    std::cout << ketemu << std::endl;

    if(ketemu){
        std::cout << "Ketemu" << std::endl;
    }else{
        std::cout << "Tidak Ketemu" << std::endl;
    }

    std::cin.get();
    return 0;

}