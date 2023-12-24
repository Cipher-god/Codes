#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
  ofstream o1("basic.txt");// Opening file basic.txt 
  o1<<"Adding this content to the basic.txt file ! "; //Wrinting in file
  o1.close();

  string s;
  ifstream i1("basicb.txt"); // Opening file basic.txt
//   i1>>s;
//   cout<<s;
  getline(i1, s);
  cout<<s;
  
  return 0;
}