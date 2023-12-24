#include <iostream>
#include <math.h>
using namespace std;

class Point
{
  int x,y;
  friend float two_distance_calc(Point , Point);
  public:
    Point(int x1,int y1);//Parameterized Constructor
    void display_point(void){cout <<"The points are : ("<<x<<','<<y<<')'<<endl;}
};
Point :: Point(int x1, int y1)
{
    x = x1;
    y = y1;
}

float two_distance_calc(Point o1, Point o2)
{
   return (sqrt ( ( pow((o2.x - o1.x),2) + pow((o2.y - o1.y),2))));
}
int main()
{   
    int a,b;
    cout<<"For 1st Point --->"<<endl;
    cout<<"Enter x and y : ";
    cin>>a>>b;

    Point d1(a,b);
    d1.display_point();

    cout<<endl<<"For 2nd Point --->"<<endl;
    cout<<"Enter x and y : ";
    cin>>a>>b;

    Point d2(a,b);
    d2.display_point();
    cout<<endl<<"The distance between those 2 points are : "<<two_distance_calc(d1,d2);

    return 0;
}