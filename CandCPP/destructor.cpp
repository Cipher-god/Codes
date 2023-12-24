#include <iostream>
using namespace std;

class Numbers
{
   int a;
   public:
      static int count;
      Numbers(){ cout<<"Constructor is called"<<endl; a = 10; }
      ~Numbers(){
          cout<<"Destructor is called for : "<<count<<endl;
          count--;
      }
      void display(void);
};
int Numbers :: count;

void Numbers :: display()
{  
   cout<<"Value of data of object "<<count<<" is : "<<a<<endl;
}

int main()
{   
    cout<<"We are now inside the main function !"<<endl;
    Numbers n1;
    n1.count++;
    n1.display();
    {
        cout<<endl<<"Entering the scope with objects 2 & 3 !"<<endl;
        Numbers n2,n3;
        n2.count++;
        n2.display();
        n3.count++;
        n3.display();
        cout<<endl<<"Exiting the scope ! "<<endl;
    }

  cout<<endl<<"Now exiting the main() function ! "<<endl;
  return 0;
}