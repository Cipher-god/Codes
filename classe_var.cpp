//Here 'i' 's value is not destroy b'cos 'i' is declared in class
// And not in a function hence value is preserved(like static)
#include <iostream>
using namespace std;

class house
{
   int gate[10];

   public:
   int i;
   void increment(void){ i = 0;}
   void display(void);

};

void house :: display(void)
{
    cout<<"Value of "<<i+1<<" gate is "<<i<<endl;
    i++;
}
int main()
{ 
   house tenament;
   tenament.increment();
   tenament.display();
   tenament.display();
   tenament.display();
 
  return 0;
}