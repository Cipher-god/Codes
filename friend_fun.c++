#include <iostream>
using namespace std;

class Maths
{
  int a[2][2];

public:
  void set_no(void);
  friend Maths sum_matrices(Maths, Maths);
  void display_ans(Maths);
};

void Maths ::set_no(void)
{
  int i, j;
  cout << endl
       << "Enter 4 elements of (2x2) Matrix :" << endl;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      cin >> a[i][j];
    }
  }
}

Maths sum_matrices(Maths x1, Maths x2)
{
  int i, j;
  Maths x3;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      x3.a[i][j] = x1.a[i][j] + x2.a[i][j];
    }
  }

  return x3;
}

void Maths ::display_ans(Maths b1)
{
  int i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      cout << ' ' << b1.a[i][j];
    }
    cout << endl;
  }
}
int main()
{
  Maths o1, o2, ans;
  o1.set_no();
  o2.set_no();
  //   ans = sum_matrices(o1,o2);

  ans.display_ans((sum_matrices(o1, o2)));
  return 0;
}

/*   --------- Properties of friend function ---------
  1. Not in the scope of the class (not a member of class) just given access to
    elements.
  
  2. Since it is not in the scope of class, it cannot be called from object of 
    that class o1.sum_matrices() (Invalid) only sum_matrices (Valid). 
  3. Can be invoked(call) without help of object.

  4.Usually contains  objects as arguments .
  5.Can be declares in public or private section of class.
  6.It cannot acces the member of the class directly by their name & need 
    object_name.member_name to acces any member.
*/