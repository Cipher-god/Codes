/*                 Both map (map and unordered) find() the key 
//                 value not value present at key like an index of array

*/

#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
  map<string,float> mp;  
  unordered_map<string,float> up;  

  mp["Map1"] = 1.01;
  mp["Map2"] = 2.02;

  up["UnMap1"] = 10.01;
  up["UnMap2"] = 20.02;

  cout<<"Elements in Map Container : "<<endl;
  cout.width(7);
  cout<<"Keys Values"<<endl;
  for (auto n : mp)
  { 
    cout.width(4);
    cout<<n.first<<" "<<n.second<<endl;
    
  }
  cout<<endl;
   
  cout<<"Elements in Unordered_Map Container : "<<endl;
  cout<<"Keys  Values"<<endl;
  for (auto n : up)
  {
    cout<<n.first<<"  "<<n.second<<endl;
  }
  cout<<endl;
  
  string find1,find2;
  cout<<"Enter find1(map) and find2(un_map) : ";
  cin>>find1>>find2;

  cout<<endl;

  // Map
  map<string,float>::iterator  it1 = mp.find(find1);
  if(it1 == mp.end())
  cout<<"Not found Map"<<endl;

  else
  cout<<(*it1).first<<" "<<(*it1).second;
   
  cout<<endl;
  // Unordered_Map
  unordered_map<string,float>::iterator it2 = up.find(find2);
  if(it2 == up.end())
  cout<<"Not found Unordered_Map"<<endl;

  else
  cout<<(*it2).first<<" "<<(*it2).second;
 
  return 0;
}