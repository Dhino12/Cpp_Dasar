#include <iostream>
#include <string>
#include <fstream>
using namespace std;

    struct node
    {
        int number;
        node *next;
        /* data */
    };
    bool isEmpty(node *head){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }
    char menu(){
        char choise;
        cout << "Menu " << endl;
        cout << "1. Add an Item. \n";
        cout << "2. Remove an Item. \n";
        cout << "3. show an Item. \n";
        cout << "4. Exit an Item. \n";
    cin >> choise ;
    return choise;
    }
    void insertAsFirstElemnt(node *&head, node *&last, int number){
        node *temp = new node;
        temp -> number = number;
        temp -> next = NULL;
        head = temp;
        last = temp;
    }
    void insert(node *&head, node *&last, int number){
        if(isEmpty(head)){
            insertAsFirstElemnt(head,last,number);
        }else{ 
            node *temp = new node;
            temp -> number = number;
            temp -> next = NULL;
            last -> next = temp;
            last = temp;
        }
    }
    void remove(node *&head, node *&last){
        if (isEmpty(head)){
            cout << "The List already empty" << endl;

            /* code */
        }else if(head == last){
            delete head;
            head == NULL;
            last == NULL;
        }else{
            node *temp = head;
            head = head -> next;
            delete temp;
        }
    }
    void showList(node *current){
        if(isEmpty(current)){
            cout << "The is list Empty " << endl;
        }else{
            cout << "The list Contain = " << endl;
            while(current != NULL){
                cout << current -> number << endl;
                current = current -> next;
            }
        }
    }
    

int main(){

    node *head = NULL;
    node *last = NULL; 
    
    char choise;
    int number;
    do{
        choise = menu();
        switch (choise)
        {
        case '1':
            cout << "Please enter a number = ";
            cin >> number;
            insert (head ,last ,number);
            break;
        case '2':
            remove(head,last);
            break;
        case '3':
            showList(head);
            break;
        default:
            cout << "System exit " << endl;
        }
    }while(choise != '4');
    cin.get();
    return 0;
}
