#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int n,i = 1, fact = 1;
  cout<<"Enter a no.  ";
  cin>>n;

  while(i <= n){
     fact *= i;
     i++;
  }
  
  cout<<"Factorial of given no. is "<<fact;
  getch();
  return 0;
}