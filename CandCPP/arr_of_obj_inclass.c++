#include <iostream>
#include <string>
using namespace std;

class student
{
  string name;

public:
  void get_name(void)
  {
    cout << "Enter your name : " << endl;
    cin >> name;
  }
  void put_name(void)
  {
    cout << endl<< "Your name is : " << name << endl;
  }
  void concatinate(void);
};
void student :: concatinate(void)
{
  name.append("A.X.School");
  cout<<name<<endl;
}
int main()
{
  student A[4], B[3];
  int i;

  cout << "\nFor A batch students : \n";
  for (i = 0; i < 4; i++)
  {
    A[i].get_name();
    A[i].put_name();
    A[i].concatinate();
  }

  cout << "\nFor B batch students : \n";
  for (i = 0; i < 3; i++)
  {
    B[i].get_name();
    B[i].put_name();
    B[i].concatinate();

  }

  return 0;
}