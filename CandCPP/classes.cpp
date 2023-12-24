#include <iostream>
using namespace std;

/* Syntax :
  class class_name
  {
    private:
    int a,b,c;          --ONly functions of class can access it
    
    public:
    int d,e;            --All functions can access it

  }
*/
class student
{
  private:
  int t1 = 9898,t2 = 7070;

  public:
  int s1,s2,s3;
  void private_teachr(int x,int y);//Only Declaration
  void display_rollno(void)
  {
    cout<<"Roll no. of Student 1: "<<s1<<endl;
    cout<<"Roll no. of Student 2: "<<s2<<endl;
    cout<<"Roll no. of Student 3: "<<s3<<endl;
    cout<<"Roll no. of Teacher 1: "<<t1<<endl;
    cout<<"Roll no. of Teacher 2: "<<t2<<endl;
  }
};

/*Syntax of definig class function to a different place: 

void class_name :: function_name()  --- "::"this is a scope resolution operator
{
  data
}
*/
//example
// void student :: private_teachr(int x,int y)
// {

// }
int main()
{
  student johnsir;
  // johnsir.t1 = 3;   --> this will throw error b'cos it's private.
  johnsir.s1 = 11;
  johnsir.s2 = 22;
  johnsir.s3 = 33;
  johnsir.display_rollno();
 
  return 0;
}