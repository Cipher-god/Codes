#include <stdio.h>
int main()
{
  int n, k = 2, chk = 0, count1;
  scanf("%d",&n);
  //Linear timing algorithm that makes execution time increasing

  // Step 1 start
  // Step 2 enter n no.
  // Step 3 loop check modulus divide to n by 2 to n-1
  // Step 4 if n%k == 0 then it's not prime (where k = 2 ,and increment in loop k++)
  // Step 5 else it's a prime
  // Step 6 stop
  for (int i = 0; i < n; i++)
  {
      if(n%k == 0)
      { 
        if(n != k){
        printf(" %d Not a prime no ",n);
        chk++;
        break;}
      }
      count1++;
      k++;
  }
  if(chk == 0){
    printf("%d is a prime no ",n);
  }
  printf("\n1 program count %d",count1);
  printf("\n\n");

  int n2, i, count2  = 0;
  int isPrime = 1;
  scanf("%d",&n2);

  for ( i = 2; i*i < n2; i++)
  {
      if(n2%i == 0){
          isPrime = 0;
      }
      count2++;
  }

  if(isPrime){
      printf("It is a prime number");
  }
  else
  {
      printf("It is not a prime number");
  }
  printf("\n2 program count %d",count2);
  
  
  return 0;
}