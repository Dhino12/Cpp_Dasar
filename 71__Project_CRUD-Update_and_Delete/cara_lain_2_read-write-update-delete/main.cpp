#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student{
    int id;
    char name[20];
    char name1[20];
    /* data */
};


int main(){
    loop:
    student s , p;
    int a ,b;
    cout << "1. Save Student Record" << endl;
    cout << "2. Take Student Record" << endl;
    cout << "3. Delete a Record " << endl;
    cout << "4. Edit a Record " << endl;
    cout << "choise > = ";
    cin >> a;

    switch (a)
    {
    case 1:{
        cout << "Enter Student ID = " ;
        cin >> s.id;
        cout << "Enter Student First Name = ";
        cin >> s.name;
        cout << "Enter Student Last Name = ";
        cin >> s.name1;

        ofstream sdata;
        sdata.open("student.txt",ios::app);
        sdata << endl;
        sdata << s.id;
        sdata << endl;
        sdata << s.name;
        sdata << endl;
        sdata << s.name1;
        sdata << endl;
        sdata << endl;
        sdata.close();
        goto loop;
        break;
    }
    case 2:{    
        ifstream tdata;
        tdata.open("student.txt");
            tdata >> s.id;
            tdata >> s.name;
            tdata >> s.name1;
        
        while(!tdata.eof()){
            cout << "\nStudent ID is: " << s.id;
            cout << "\nStudent Name : " << s.name << " " << s.name1;
            
            tdata >> s.id;
            tdata >> s.name;
            tdata >> s.name1;
        }
        tdata.close();
        goto loop;
        break;
    } 
    case 3:{
        cout << "\nEnter ID of Student want to delete record = ";
        cin >> b;
        ifstream d;
        d.open("student.txt");
        ofstream e;
        e.open("new.txt");
            d >> s.id;
            d >> s.name;
            d >> s.name1;
        while(!d.eof()){
            if (s.id != b){
                e << endl;
                e << s.id;
                e << endl;
                e << s.name;
                e << endl;
                e << s.name1;
                e << endl;
            }else{
                cout << "\nData Record Deleted";
            }
            d >> s.id;
            d >> s.name;
            d >> s.name1;
        }
        e.close();
        d.close();
        if(remove("student.txt") != 0){
            cout << "\nFile does'n remove ";
        }else{
            cout << "\n ok";
        }
        
        if (rename("new.txt","student.txt") != 0){
            cout << "\nFile does'n rename ";
        }else{
            cout << "\nok";
        }goto loop;
        break;
    }
    case 4:{
        break;
    }
    }
    return 0;
}