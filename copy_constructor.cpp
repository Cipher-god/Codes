#include <iostream>
#include <conio.h>
using namespace std;
class Cpyconstructor
{
  int a;
  public:
    Cpyconstructor(int x){ a = x; }
    Cpyconstructor(Cpyconstructor &);// Creating copy constructor manually
    void display(void){cout<<"No. of this object : "<<a<<endl;}
};

Cpyconstructor :: Cpyconstructor(Cpyconstructor &obj)
{   
    a = obj.a;
    cout<<"Copy constructor invoked ! ! !"<<endl;
}
int main()
{
  Cpyconstructor c1(7);
  c1.display();
  Cpyconstructor c2(c1);// object as argument 
  c2.display();

  getch();
  return 0;
}