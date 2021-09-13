#include <iostream>
#include <map>
using namespace std;
int main()
{
//   cout<<true;//  Prints 1
  
  map<int,float> mp;
  mp[3];
  mp[4];  
  mp[5];
  /* We can also initilize map like this
  mp[5];     initilize only key;                */
  ;

  // Later on initilize like in below range_for loop;
  for (auto n : mp)
  {   
      int i = 10;
      n.second = n.first*i;                // OoooooOHYeah !!Yeah
      cout<<n.first<<' '<<n.second<<endl;
  }
  
  return 0;
}