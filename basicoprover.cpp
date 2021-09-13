#include <iostream>
using namespace std;

class New{
   int a,b;
   public:
       void setData(int x, int y)
       { 
         a = x;
         b = y;
       }
       void Display();
       void operator *(int);
       friend void operator +(New &);
};

void New::Display()
{
    cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
}
void New::operator *(int i){
    a = a*i;
    b = b*i;
}
//Friend function converts negative to positive and vice versa
void operator +(New &obj)
{
   obj.a = -obj.a;
   obj.b = -obj.b;
}
int main()
{
  New o1;
//   cout<<"Before"<<endl;
//   o1.setData(2,7);
//   o1.Display();
//   cout<<endl;
//                              /* Without  friend function  */
// //   o1*(5);
//   o1.operator*(5);
//   cout<<"After"<<endl;
//   o1.Display();

  cout<<"Before"<<endl;
  o1.setData(8,9);
  o1.Display();
  cout<<endl;
  //                             /* With  friend function  */
  operator+(o1);
  cout<<"After"<<endl;
  o1.Display();
  
  return 0;
}