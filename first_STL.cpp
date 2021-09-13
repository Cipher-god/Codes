#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v; 
  int n, size, i; 
  cout<<"Enter size of vector : ";
  cin>>size;
  cout<<"Enter "<<size<<" elements "<<endl;
  for ( i = 0; i < size; i++)
  {
     cin>>n;
     v.push_back(n);
  }
  cout<<endl;
  cout<<"Before insertion "<<endl;
  for ( i = 0; i < v.size(); i++)
  {   
      cout<<v[i]<<" ";
  }
  cout<<endl;
  vector <int> :: iterator ite = v.begin();

  v.insert(ite,2,79);  //Argument Sequence
  //   iterator, no. of copies(optional), new value to be insert

  cout<<"After insertion "<<endl;
  for ( i = 0; i < v.size(); i++)
  {   
      cout<<v[i]<<" ";
  }

  return 0;
}