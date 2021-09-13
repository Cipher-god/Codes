#include <iostream>
using namespace std;

class Base1
{
    public: 
       void say(){
           cout<<"Hello User ! "<<endl;
       }
};
class Base2
{
    public: 
       void say(){
           cout<<"Hii User ! "<<endl;
       }
};

class Derived : public Base1, public Base2
{
    protected:
      int  data = 10;
    public:
    void display()
    {
        cout<<"Value of derived data is : "<<data<<endl;
    }
    void say()
    {
        Base2 :: say();   //This is the soultion for ambigiuity !
    }
};

class K
{
    public:
       void intro(){
           cout<<"Hello dosto this is 7k Master ! "<<endl;
       }

};
class X : public K
{
    public:
       void intro(){
           cout<<"Hello dosto this is Series X ! "<<endl;
       }// This will overwrite the intro of "K" class. 

};
int main()
{
    Derived d1;
    d1.say();                   /*     First    Ambigiuity      */
    d1.display();

    // X x1;
    // K k1;
    // k1.intro();
    // x1.intro();                   /*       Second   Ambigiuity      */
 
  return 0;
}