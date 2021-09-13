// Constructor : means to construct (to build).
// Constructor is a " Special Member Function " with the same name as of the 
// class.
// It is used to intilize the objects of the class.

#include <iostream>
using namespace std;

class cricket
{
   int bat = 0, ball= 0; //default values of private members

   public:
     cricket(int,int);// Constructor declaration with parameterized
     cricket(void); // Constructor declaration with default 
     void display(void)
     {
         cout<<"\nNo. of bats are : "<<bat<<" & No. balls are : "<<ball<<endl;
     }
};
cricket ::cricket(int x,int y)
{
   cout<<endl<<"-----> Parameterized Constructor <-----";
   bat = x;
   ball = y; 
}
cricket ::cricket(void)
{ 
   cout<<endl<<"-----> Default Constructor <-----";
   bat = 4;
   ball = 5;
}

int main()
{
   cricket t1;  
   t1.display();

   cricket t2(11,22);  // Implicit call //
   t2.display();
   //-----------------> Both has common work 
   cricket t3;
   t3 = cricket(44,55); // Explicit call //
   t3.display();
 
  return 0;
}

/*   ------------ Characteristics of Constructor ------------

   1. It should be declared in the public section of the class.
   2. They are automatically invoked whenever object is created.
   3. They cannot return values because they have no '' return type ''.
   4. It can have default arguments (Default & Parameterized).
   5. We cannot refer to their address.

*/