#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int arr1[3],arr2[3],arr3[3], i;
  cout<<"Enter 1 array elements "<<endl;
  for ( i = 0; i < 3; i++)
  {
     cin>>arr1[i];
  }
  cout<<"Enter 2 array elements "<<endl;
  for ( i = 0; i < 3; i++)
  {
     cin>>arr2[i];
  }
  cout<<"Sum of both array is "<<endl;
  for ( i = 0; i < 3; i++)
  {
      arr3[i] = arr1[i]+arr2[i];
      cout<<arr3[i]<<' ';
  }
  getch();
  return 0;
}