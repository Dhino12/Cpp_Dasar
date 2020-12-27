#include <iostream>
#include <fstream>

using namespace std;
void writing();
void deleting();
void searching();

class student {

public:
  int age = 0;
  string name;

  void SetGpa(float x)
  {
    gpa = x;
  }
  float GetGpa()
  {
    return gpa;
  }

private:
  float gpa = 0.0;

};


int main()
{
  int opt;
  cout << "Please Enter an option number to continue:\n ";
  cout << "\nPress 1 for New Record insertion";
  cout << "\nPress 2 for Record Deletion";
  cout << "\nPress 3 for Searching a Record";
  cout << "\nPress 4 for Updating a Record";
  cout << "\nEnter option Number: ";
  cin >> opt;

  switch (opt)
  {
  case 1:
  {
    writing();
    break;
  }

  case 2:
  {
    deleting();
    break;
  }

  case 3:
  {
    searching();
    break;
  }
  case 4:
  {
    deleting();
    writing();
    cout << "Record has been updated! ";
    break;
  }
  }
}

void writing()
{
  float a;
  student moiz;
  cout << "Please enter name of student: ";
  cin >> moiz.name;
  cout << "Please enter the age of student: ";
  cin >> moiz.age;
  cout << "Pleae enter the Gpa of student: ";
  cin >> a;
  moiz.SetGpa(a);

  ofstream myfile;
  myfile.open("record.txt", ios::app | ios::out);
  myfile << endl << moiz.name << endl;
  myfile << moiz.age << endl;
  myfile << moiz.GetGpa();
  myfile.close();
}

void deleting()
{

  string line, name;
  cout << "Please Enter the name of record you want to delete: ";
  cin >> name;
  ifstream myfile;
  ofstream temp;
  myfile.open("record.txt");
  temp.open("temp.txt");
  while (getline(myfile, line))
  {
    if (line != name)
      temp << line << endl;
  }
  cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
  myfile.close();
  temp.close();
  remove("record.txt");
  rename("temp.txt", "record.txt");
}

void searching()
{
  ifstream fileInput;
  fileInput.open("record.txt");
  string line, search;
  cout << "Please enter the term to search: ";
  cin >> search;
  for (unsigned int curLine = 0; getline(fileInput, line); curLine++)
  {
    if (line.find(search) != string::npos)
    {
      cout << "found: " << search << " on line: " << curLine << endl;
    }
    else
    {
      cout << "Error! Not found on Line" << curLine << endl;
    }
  }
}