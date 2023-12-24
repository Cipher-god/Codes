/* 
   Function Objects(Functor):->
   Function wrapped in a class so that it is available like an object 
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
  int A[] = {1,34,0,9,56,10};
//sort(A,A+5);// (+5) sort till 5 elements 

//   sort(A,A+6,greater<int>()); // greater<int>() is a function object

//   for (int i = 0; i < 6; i++)
//   {
//      cout<<A[i]<<"  ";
//   }
  plus<int>();
  
  return 0;
}