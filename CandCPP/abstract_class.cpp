#include <iostream>
using namespace std;

class General_store{
   
   public:
       void virtual show_unit() = 0; // This is do nothing function
       //Known as  -->Pure_Virtual Function
       void greet(){
           cout<<"Hello user welcome to my World !"<<endl;
       }
};

class Milk : public General_store{

   public:
      void show_unit()
      {
          cout<<"This is a milk category So unit is litre(l)"<<endl;
      }
};
class Rice : public General_store{

   public:
      void show_unit()
      {
          cout<<"This is a rice category So unit is kilogram(kg)"<<endl;
      }
};
int main()
{
    Milk m;
    Rice r;
    General_store *item[2] = {NULL, NULL};
    item[0] = &m;
    item[0]->greet();
    item[0]->show_unit();
    
    item[1] = &r;
    item[1]->greet();
    item[1]->show_unit();
    
    // Milk m1;
    // General_store *g1 = &m1;
    // g1->show_unit();
    // Rice r1;
    // g1 = &r1;
    // g1->show_unit();
    // g1->greet();

  return 0;
}
// class General store is a abstract_class
// And any abstract class has at least one pure virtual function
// In class General store the pure virtual function is show_unit()