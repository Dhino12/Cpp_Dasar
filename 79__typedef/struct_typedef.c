#include <conio.h>
#include <stdio.h>
#include <string.h>
// using namespace std; 

    struct Siswa {
        char  nama[50];
        char  sekolah[50];
        unsigned int  uangSaku;
    };//biodataSiswa;
    
    typedef struct Siswa biodataSiswa;
    
    int main(){
    // typedef = mengganti tipe data dengan namavariable
    //typedef struct namavariablestruct nama_variable;
    //typedef tipeDataAsal namavariable

    biodataSiswa siswa01;
    
        strcpy(siswa01.nama, "Patimura");
        strcpy(siswa01.sekolah, "SMK Uang Seribu");
        siswa01.uangSaku = 10000;
        printf("============ Output ========== \n");
        printf(" %s \n bersekolah di %s ", siswa01.nama, siswa01.sekolah);
        printf("\n dengan uang saku %i per hari\n", siswa01.uangSaku);
        printf("============ END ============== \n");
    
    getch();
} 