#include <iostream>
using namespace std;
// We need to declare a ' Forward Decclaration ' to help compiler to fing numbers
// class 
class numbers;
//Class of claculations 
class Maths
{
   public:
     int Area_of_rectangle(numbers);
};
//Class of vlaues
class  numbers
{
    int a,b;
    //First method : declares specfic functions to friend functions
    // friend int Maths :: Area_of_rectangle(numbers);
    
    //Second method : declares all functions to friend functions
    // make  a whole class into ' friend '
    friend class Maths;

    public:
      void set_num(void);
      void display_ans(int);
};

void numbers :: set_num(void)
{
  cout<<"Enter two no.'s : ";
  cin>>a>>b;
}
int Maths :: Area_of_rectangle(numbers c1)
{
   return (c1.a * c1.b);
}

void numbers :: display_ans(int ans)
{
    cout<<"The Area of Rectangle is : "<<ans;
}
int main()
{
  numbers x1;
  Maths calc;
  x1.set_num();
  int ans = (calc.Area_of_rectangle(x1)) ;
  x1.display_ans(ans);
 
  return 0;
}