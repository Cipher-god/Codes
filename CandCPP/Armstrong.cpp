#include <iostream>
#include <conio.h>
using namespace std;

int Armstrong(int n2)
{
  int rem, arm = 0;

  while(n2 != 0){
   
   rem = n2 % 10;
   arm += rem * rem * rem;
   n2 /= 10;
  }
  
  return arm;
}
int main()
{
  int n;
  cout<<"Enter a no. : ";
  cin>>n;
  
  
  
  if(Armstrong(n) == n)
  cout<<n<<" is an Armstrong number ";
  else
  cout<<n<<" is not an Armstrong number ";

  getch();
  return 0;
}