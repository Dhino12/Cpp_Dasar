#include <iostream>
#include <string.h>
using namespace std;

int main(){ 

    //Menyalin String ke Variable 2
    char a[10];
    strcpy(a,"Dunia");
    cout << "String yang disalin = " << a << endl;

    //menyalin string ke variable 1
    string kata("cat");
    //menampilkan data string
    cout << kata << endl;

    //mengambil karakter berdasarkan index
    cout << "Index ke-0 = " << kata[0] << endl;
    cout << "Index ke-1 = " << kata[1] << endl;
    cout << "Index ke-2 = " << kata[2] << endl;

    //Merubah Karakter Pada Index
    kata[1] = 'e' ;//karena karakter
    cout << kata << endl;

    //Menyambung (Concatenation)
    string kata2(kata + "ar");
    cout << kata2 << endl;

    //Menggabungkan String 1
    string kata3(" Membahana");
    kata2.append(kata3);
    cout << kata2 << endl;

    //Menggabungkan String 2
    string kata4("Ahayy!!!");
    kata2 += ' ' +kata4;
    cout << kata2 << endl;  

    //Membandingkan string (char array)
    char kata1[7] = "kunyuk" ;
    char kata5[7] = "KUNYUK" ;
    int hasil;
    hasil = strcmp(kata1,kata5); //string comparation strcmp()
    cout << "Hasil Perbandingan = " << hasil << endl;

    //memasukan string for (char array)
    //cin.get(variable,array);
    char kata6[100];
    cout << "Masukan Kata = ";
    cin.get(kata6,100);
    cout << "Hasil = " << kata6 << endl;

    //Menggabungkan dua buah string (char array)
    char kata8[100] = " hallo";
    strcat(kata1 , kata8);
    cout << kata1 << endl; 

    //mengatahui panjang string (char array)
    hasil = strlen(kata1);
    cout << "Panjang string kata1 = " << hasil << endl;

    // mencari huruf (signed char)
    char kata9[50] = "yui yuigahama";
    char dicari = 'i';
    char* hasilnya;
    hasilnya = strchr(kata9,dicari); 
    printf("index %c yang di cari  %d",dicari,hasilnya-kata9);  
    
    cin.ignore();
    cin.get();
    return 0;
}