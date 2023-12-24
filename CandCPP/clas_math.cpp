#include <iostream>
using namespace std;

class maths
{
   int a,b;

   public:
      maths(){a = 0,b=0;}
      maths(int x){a = x,b = 0;}
      maths(int x, int y){ a = x ,b = y;}
      maths(float x,int y){ a = x, b = y;}

      float add(void){ return (float)a+b;}
      int   sum(void){ return a+b;}
};
int main()
{
  maths m1((float).5,53);
  cout<<"The sum is : "<<m1.add();
 
  return 0;
}