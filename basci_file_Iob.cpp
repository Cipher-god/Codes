#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
  // ofstream out("New.txt");
  // string name;
  // char *str = NULL; // set this NULL b'cos it will not become wild pointer
  // int roll;
  // cout<<"Enter your name : ";
  // getline(cin, name);
  // cout<<"Enter your roll no. : ";
  // cin>>roll;

  // out<<"Your name is : "<<name<<endl;
  // out<<"Your roll no.  is : "<<roll;
  // out.close();

  // cout<<endl;
  // ifstream in("New.txt");
  // cout<<"Content of the file ->"<<endl;
  
  // while((in>>str) && *str != EOF){
  //   putchar(*str);
  // }
  // in.close();

  ifstream intxt;
  intxt.open("Test.txt");
  string str;
  while((getline(intxt, str)))
  { 
    cout<<str;
    if('\n'){cout<<endl;}
  }

  intxt.close();
  return 0;
}