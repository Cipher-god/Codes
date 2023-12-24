#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  string word;
  cout<<"Enter word : ";
  getline(cin,word);

  int i,n = word.length();

  cout<<endl;
//   for(i = n-1;i >= 0;i--)
//   {
//       cout<<word[i];
//   }
  reverse(word.begin(),word.end());
  cout<<word;
  return 0;
}