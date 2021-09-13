#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// The useful classes present in <fstream> for working files in C++ are:
// 1.fstreambase
// 2.ifstream       (Input_file)  --> Dervied from fstreambase.
// 3.ofstream      (Output_file)  --> Dervied from fstreambase.

/* 
   In order to work with files in C++ , you will have to open it
   primarly there two way:

 1. Using the Constructor
 2. Using the memeber function open() of the class

*/

int main()
{
   // Opening file using constructor
//    ofstream out("first.txt"); //writing in file 
//    string s = "Commander @ka David_Mason";
//    out<<s;
  
  // Opening file using constructor 
//   ifstream in("firstb.txt"); // reading from file
//   string s1;
// //   cout<<s1;
//   getline(in, s1);
//   cout<<s1<<endl;
//   getline(in, s1);
//   cout<<s1;
  
  ofstream fout("Docs.docx");
  string s1 = "--> Writing content in the word docx file <--!";
  fout<<s1;
  fout.close();// Closing the file 

  ifstream fin("Docs.docx");
  string s2;
  getline(fin, s2);
  cout<<s2;
  fin.close();


  return 0;
}

// ofstream fout will write the content but first it erase the exisiting.
// content of the file.