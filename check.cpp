#include <iostream>
#include <unordered_map>
using namespace std;

void Removeduplicate(int arr[],int n)
{
  unordered_map<int,bool> mp;
  int i;
  // if(mp.empty())
  // {
  //   cout<<"How it's working with empty map elemnts !"<<endl;
  // }
  int j = 0;
  for(i = 0; i < n; i++)
  {
    if(mp.find(arr[i]) == mp.end())
    {
      cout<<arr[i]<<' ';
    }
    else
    {
      cout<<endl<<"j value "<<j<<endl;;
      j++;
    }
    mp[arr[i]] = true;
  }
  cout<<endl;
  for (auto n : mp)
  {
     cout<<n.first<<' '<<n.second<<endl;
  }
  
  
}
int main()
{
  int arr[] = {4,2,2,4,7};
  int n = 5;
  
  Removeduplicate(arr,n);
 
  
  return 0;
}