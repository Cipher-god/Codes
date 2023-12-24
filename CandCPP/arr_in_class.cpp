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
   void get_gatesize(void);
   void display(void);

};

void house:: get_gatesize(void)
{   
    int n;
    cout<<"Enter How many gates you Want : "<<endl;
    cin>>n;
    for (int j = 0; j < n; j++)
    {    
        cout<<"Enter size of gate no. "<<j+1<<" in meter"<<endl;
        cin>>gate[j];
    }
    for (int j = 0; j < n; j++)
    {
        display();
    }
    
}
void house :: display(void)
{
    cout<<"Size of "<<i+1<<" gate in meter is "<<gate[i]<<endl;
    i++;
}
int main()
{ 
   house tenament;
   tenament.increment();
   tenament.get_gatesize();
 
  return 0;
}