#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void Display(array<int,3> arr)
{
  int i = 0;
  for(i = 0; i<3; i++)
  {
    cout<<arr[i]<<endl;
  }
}

int main()
{
  // first argument(datatype) second is size;
  // like a noraml array but with various useful functions and algorithms!
  array<int,3> A; 
  A[0] = 89;      // simple initilize with 'A[index]' include in <iostream>
  A.at(1) = 90;   // initilize with 'A.at(index)' include in <array>
  get<2>(A) = 91; // initilize with 'get<index>(A)'include in <tuple> or <algorithm>
  // get<3>(A) = 92;
  // get<4>(A) = 93;


  // cout<<"A[3] = "<<get<3>(A)<<endl;
  // cout<<"A[4] = "<<get<4>(A)<<endl;
  
  // some functions of <arrays>
  cout<<"A.front : "<<A.front()<<endl;// gives value of first element
  // cout<<"Max : "<<A.max_size()<<endl;
  // cout<<A.size();
  cout<<"A.back : "<<A.back();

  // creating a new array for testing swap()
  array<int,3> B;
  B.fill(7);// fill 7's 3 times
  A.swap(B);
  cout<<endl<<"Display elements of A "<<endl;
  Display(A);
  cout<<endl<<"Display elements of B "<<endl;
  Display(B);

  return 0;
}