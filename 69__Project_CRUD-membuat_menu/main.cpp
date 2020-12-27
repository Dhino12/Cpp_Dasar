#include <iostream>
#include <limits>
using namespace std;

int getoption(){
    int input;
    system("cls");
    cout << "\n Program Mahasiswa" << endl;
    cout << "==========================" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Tampilkan Data Mahasiswa" << endl;
    cout << "3. Ubah Data Mahasiswa" << endl;
    cout << "4. Hapus Data Mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=========================== " << endl;
    cout << "Pilih [1-5] = ";
    cin >> input ;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}

int main(){  

    int pilihan = getoption();
    char is_continue; 

    enum option{Create = 1 ,READ ,UPDATE ,DELETE ,FINISH};
    while (pilihan != FINISH )
    {
        switch (pilihan){
        case Create:
            cout << "Menambah Data Mahasiswa "<< endl;   
            break;
        case READ:
            cout << "Tampilkan Data Mahasiswa "<< endl;  
            break;
        case UPDATE:
            cout << "Ubah Data Mahasiswa "<< endl;  
            break;
        case DELETE:
            cout << "Hapus Data Mahasiswa "<< endl;  
            break;
        default:
            cout << "Pilihan Tidak Ditemukan " << endl;
            break;
        }  
        label_continue:

        cout << "Lanjutkan ? (Y/N) = ";
        cin.get(is_continue);
        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getoption();
        }else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue;
        }  

    }
    cout << "Akhir dari program" << endl;
    
    cin.get();
    return 0; 
}
