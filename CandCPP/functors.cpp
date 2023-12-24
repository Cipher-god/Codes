#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  string a[4] = {"Carlos","Bob","Alfred","Tony"}; 
  sort(a,a+4);
  int i = 0;
  while ( i < 4)
  {
      cout<<a[i]<<' ';
      i++;
  }
  
    
 
  return 0;
}