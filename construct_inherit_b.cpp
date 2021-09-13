#include <iostream>
using namespace std;
/*                          Type     3              */
// class Base1
// {
//     protected:
//        int data1;
//     public:
//        Base1(int b1){
//            data1 = b1;
//            cout<<"\nBase 1 constructor is called "<<endl;
//        }
// };
// class Base2
// {
//     protected:
//        int data2;
//     public:
//        Base2(int b2){
//            data2 = b2;
//            cout<<"Base 2 constructor is called "<<endl;
//        }
// };

// class Derived : public Base1, public Base2
// {
//    protected:
//        int deriveval;
//    public:
//        Derived(int x,int y, int z):Base2(y),Base1(x)
//        {
//            deriveval = z;
//            cout<<"Derived constructor is called "<<endl;
//        }
//        void display(){
//            cout<<"Value of data 1 is : "<<data1<<endl;
//            cout<<"Value of data 2 is : "<<data2<<endl;
//            cout<<"Value of derive val is : "<<deriveval<<endl;
//        }
// };

/*                          Type     4              */

class BaseA
{
    protected:
       int baseA;
    public:
       BaseA(){}
       BaseA(int x){
       baseA = x;
       cout<<"A contructor is called"<<endl;}     
};
class DerivedB :  virtual public BaseA
{
    protected:
       int deriveB;
    public:
       DerivedB(int y){ deriveB = y;
       cout<<"B contructor is called"<<endl;}     
};
class DerivedC : virtual public BaseA
{
    protected:
       int deriveC;
    public:
       DerivedC(int z){ deriveC = z;
       cout<<"C contructor is called"<<endl;}  
};

class DerivedD :  public DerivedB,  public DerivedC
{
    protected: 
        int deriveD;
    public:
        DerivedD(int a1,int a2, int a3, int a4):BaseA(a1),DerivedB(a2),
        DerivedC(a3){
        deriveD = a4;
        cout<<"D contructor is called"<<endl;}
        void display(){
            cout<<"Value of baseA is : "<<baseA<<endl;
            cout<<"Value of deriveB is : "<<deriveB<<endl;
            cout<<"Value of deriveC is : "<<deriveC<<endl;
            cout<<"Value of deriveD is : "<<deriveD<<endl;
        }  
};
int main()
{
    DerivedD d1(1,2,3,4);
    d1.display();
   
  return 0;
}