/*
 //                  We might use int and bool together for 
 //                  " Comparision "
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> vec = {1,20,45,67,89,300};
  int bs = 0;
  vector<int>::iterator it = vec.begin();
  bs = binary_search(vec.begin(),vec.end(),300);
//   if(binary_search(vec.begin(),vec.end(),300))
//   cout<<"Element found at "<<(it-vec.begin());

  if(bs == true)
  cout<<"Element found !"<<endl;

  else
  {
    cout<<"Element Not found !"<<endl;  
  }
  
 
  return 0;
}