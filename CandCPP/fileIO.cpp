#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  ofstream fout("nwt.txt");
  string ostr;
  cout<<"Writing to the file ->"<<endl<<endl;
  cout<<"Enter any content you want to enter in file : "<<endl;
  while(ostr != "00")
  {
    getline(cin,ostr);
    if(ostr != "00")
    fout<<ostr<<endl;
  }
  fout.close();

  ifstream fin("nwt.txt");
  string st;
  cout<<"Reading from the file ->"<<endl;
  cout<<"The content of file nwt.txt is -> "<<endl<<endl;
  while(fin.eof() == 0){
    getline(fin,st);
    cout<<st<<endl;
  }
  fin.close();
  return 0;
}