#include <iostream>
using namespace std;

//  4 8
//  6 5
// -----
//  10 13
class temp{
   
   public:
      int a,b;
   void get_values(){
       cout<<"Enter two no : ";
       cin>>a>>b;
   }
   friend void sum(temp);
};

void sum (temp o1, temp o2){
   cout<<"Final ans is : ";
   cout<<o1.a+o2.a<<" "<<o1.b+o2.b;
}
int main()
{
  temp o1,o2;
  o1.get_values();
  o2.get_values();
  sum(o1, o2);
 
  return 0;
}