#include <iostream>
using namespace std;
int main()
{ 
  int a[2][2]={{1,2},{3,4}}, i,j;
  //2x2 matrix or 2-dimensional array 
  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 2; j++)
    {
       cout<<' '<<a[i][j];
    }
    cout<<'\n';
  }
  
  return 0;
}