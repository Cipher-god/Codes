#include <iostream>
using namespace std;

/*                Type 2            */
// class Base1
// {
//    protected:
//         int data1;
//    public:
//         Base1(){
//         cout<<"\n\nBase1 default constructor is called "<<endl;
//         data1 = 1;}
//         Base1(int x){
//          data1 = x; cout<<"Base 1 Parameterized constructor is called "<<endl;}
// };
// class Derived : public Base1
// {
//    protected:
//         int dataderive;
//    public:
//         Derived(int x,int y):Base1(y){ dataderive = x;cout<<"Derived Constructor is"        <<" called "<<endl;}
//         void display(){
//             cout<<"Value of derived data is : "<<dataderive<<endl;
//             cout<<"Value of Base1 data is : "<<data1<<endl;
//         }

// };
/*                    Type  1          */
class Base1
{  
   protected:
       int baseval;
   public:
       Base1(){ baseval = 11;
       cout<<"\nBase 1 constructor is called "<<endl;}
       Base1(int b){
           baseval = b;
           cout<<"Value of base 1 data is : "<<baseval<<endl;
       }
       
};
class Derived : public Base1
{
   protected:
       int deriveval;
   public:
       Derived(){ 
       cout<<"Derived constructor is called "<<endl;}
       Derived(int i,int j): Base1(i){
        deriveval = j;   
        cout<<"Value of derived data is : "<<deriveval<<endl;
       }
};
int main()
{
   Derived d1;
   Derived d2(10,20);
 
   return 0;
}

// If  I want to call Base1 parameterized constructor then following

// syntax is use otherwise if i called it in default contructor of

// derived like-> Derived(): Base1(22){ //then there is no use  }

// but it will work in this-> Derived(int d): Base1(22){ //this works }