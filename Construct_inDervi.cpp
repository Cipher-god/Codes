#include <iostream>
using namespace std;

// Order of execution of constructors in base and derived classes
// class Base1{
//     public:
//        Base1(){
//            cout<<"Hello From Base1 class Constructor !"<<endl;
//        }

// };
// class Base2{
//     public:
//        Base2(){
//            cout<<"Hello From Base2 class Constructor !"<<endl;
//        }

// };
// class Dervied : public Base1, virtual public Base2{
//     public:
//        Dervied(){
//            cout<<"Hello From Dervied class Constructor !"<<endl;
//        }

// };
class Base1{
   int a = 11;
   public:
      Base1(){
          cout<<"Base1 constructor invoked !"<<endl;
      }
      Base1(int i){
          a = i;
          cout<<"Base1 data is : "<<a<<endl;
      }
};
class Base2{
   int b = 22;
   public:
      Base2(){
          cout<<"Base2 constructor invoked !"<<endl;
      }
      Base2(int i){
          b = i;
          cout<<"Base2 data is : "<<b<<endl;
      }
};
class Derived : public Base1, public Base2{
    int c = 33;
    public:
       Derived(int x,int y,int z):Base1(x),Base2(y){
           c = z;
           cout<<"Derived data is : "<<c<<endl;
       }
};
int main()
{
  Derived o1(101,102,103);
 
  return 0;
}