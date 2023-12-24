#include <iostream>
using namespace std;
int main()
{
  //  float c = 142.89567, b = 156.6789;
  //  cout.precision(6);
  //  cout<<c<<endl;       /* We don't have write precision for every individual
  //  //                     only one will set precision for all   */
  //  cout<<b;        
  //  cout.precision(4);  //We can change(reset) whenever it is necessary
  //  cout<<endl<<c; 

//    double a = 133.890000;
//    cout.precision(9);
//    cout<<a;
  // float a2 = 17.8945;
  // cout.precision(4);
  // cout<<a2<<endl;
  // // cout.precision(4); // We can skip this code but it's good for practice
  // cout.width(8);
  // cout<<a2<<endl;
  
  /* -->precision()<-- function with -->width()<-- function */
  // float c3 = 33.00/7.00;
  // int i = 1;w
  // while ( i < 9)
  // {
  //   cout.width(i+1);
  //   cout.precision(i);
  //   cout<<c3<<endl;

  //   i++;
  // }

  // --------------------->  fill() function  <---------------------
  // * Also works with width()
  float f = 14.567;
  cout.fill('*');
  cout.width(7);
  cout<<f;
  

  return 0;
}