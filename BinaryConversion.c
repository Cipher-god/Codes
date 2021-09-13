#include <stdio.h>

void Binary_conversion(int nval)
{
  int  i,  remd[10] ,n = 0;
  for ( i = 0;nval != 0; i++)
  {
    remd[i] = nval%2;
    nval = nval/2;
    n++;
  }
  printf("\nBinary of a given no. is : ");
  for ( i = n - 1; i>=0 ; i--)
  {
    printf("%2d",remd[i]);
  }

}
int main()
{
  int a;

  printf("\n\n- - - - Program to to Convert given intoo Binary(0 , 1) - - - -\n\n");
  printf("Enter a no. : ");
  scanf("%d",&a);

  Binary_conversion(a);
  
  getchar();
  getchar();
  return 0;
}