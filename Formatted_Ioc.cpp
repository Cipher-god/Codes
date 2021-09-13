#include <iostream>
using namespace std;
int main()
{
  // -------------->  setf() function [setflag]  <----------------
  // . Like precision() we don't have write setf() for every individual
  //   only one sets for all but we change whenever necessary.

//   int a = 35;
//   cout.setf(ios::showpos);// ios::showpos show +sign for positive no.'s
//   cout<<a;

//   double b = 75.650;
//   cout.setf(ios::showpoint);// ios::showpoint show (0)'s after decimal . point
//   cout<<"The price is : "<<b;
  
//   cout.setf(ios::right, ios::adjustfield);
//   cout.width(8);
//   cout<<"Jack"<<endl;

//   cout.setf(ios::left, ios::adjustfield);
//   cout.width(8);
//   cout<<"Jill"<<endl;
//   cout<<"    ^^^^      <--- (four spaces)";

  // Number system hex , octal, & dec. in setf()
//   cout.setf(ios::left, ios::adjustfield);

//   cout<<endl<<"Dec"<<endl;
//   cout.setf(ios::dec, ios::basefield);
//   int i = 0;
//   while (i <= 18){
//       cout<<i+1<<' ';
//       i++;
//   }
//   cout<<endl;
//   cout<<"Oct"<<endl;
//   cout.setf(ios::oct,ios::basefield);
//   i = 1;
//   while (i <= 18){
//       cout<<i<<' ';
      
//       i++;
//   }
//   cout<<endl;
//   cout<<"Hex"<<endl;
//   cout.setf(ios::hex,ios::basefield);
//   i = 1;
//   while (i <= 18){
//       cout<<i<<' ';
      
//       i++;
//   }
//   cout<<endl<<endl;
  int a = 111;
  cout.setf(ios::uppercase);
  cout<<a;
  return 0;
}