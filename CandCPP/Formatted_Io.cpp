// ------------> Formatted I/O <---------------------- //
/*
  . ios class fnctions and flags
  . stream mainpulators
  . user defined output functions

*/

#include <iostream>
using namespace std;
int main()
{
//   int a = 1234;
//   cout.width(5);      //___________Sets values or char from right to left i.e
//   //               //   | |1|2|3|4| - creates 5 blocks
//   cout<<a;
//   int arr[5] = {1,10, 100, 1000, 10000};
//   int i = 0;
//   while(i != 5){
//       cout.width(5);
//       cout<<arr[i]<<endl;
//       i++;
//   }
// --> width needs all individual cout for formatted 
  int arr2[5] = {1,2,3,4,5}, i = 0;
  cout.width(3);
  cout<<"Value";
  cout.width(10);
  cout<<"SqValue"<<endl;

  while(i != 5){
    cout.width(3);
    cout<<arr2[i];
    cout.width(10);
    cout<<arr2[i] * arr2[i]<<endl;

    i++;
  }

  return 0;
}