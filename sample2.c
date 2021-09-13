#include<stdio.h>
#include<string.h>
struct Driver{

char name[20];
char route[10];
int lic;
int km;

}d1,d2,d3;

int main()
{
  int i;
  

  printf("-----------Travel Agency Manager----------");  
  printf("\n-------------Welcome-------------");
  printf("\n\nPlease Drivers Enter Your details one by one");
  printf("\n\n1. Driver\n");
  

  printf("Enter Your Name: ");
  gets(d1.name);

  printf("Enter Your Driving License no. : ");
  scanf("%d",&d1.lic);
  getchar();

  printf("Enter Your Route : ");
  gets(d1.route);

  printf("Enter how many kms you travelled  : ");
  scanf("%d",&d1.km);
  getchar();

  printf("\nNow 2. Driver\n");

  printf("Enter Your Name: ");
  gets(d2.name);

  printf("Enter Your Driving License no. : ");
  scanf("%d",&d2.lic);
  getchar();

  printf("Enter Your Route : ");
  gets(d2.route);

  printf("Enter how many kms you travelled  : ");
  scanf("%d",&d2.km);
  getchar();

  printf("\nNow 3. Driver\n");

  printf("Enter Your Name: ");
  gets(d3.name);

  printf("Enter Your Driving License no. : ");
  scanf("%d",&d3.lic);
  getchar();

  printf("Enter Your Route : ");
  gets(d3.route);

  printf("Enter how many kms you travelled  : ");
  scanf("%d",&d3.km);
  
  printf("\n1. Driver Details");
  printf("\nDriver name is  %s ",d1.name);
  printf("\nDriver Driving License no. is %d",d1.lic);
  printf("\nDriver Route is  %s",d1.route);
  printf("\nDriver Travelled %d Kilometers",d1.km);

  printf("\n\n2. Driver Details");
  printf("\nDriver name is  %s ",d2.name);
  printf("\nDriver Driving License no. is %d",d2.lic);
  printf("\nDriver Route is  %s",d2.route);
  printf("\nDriver Travelled %d Kilometers",d2.km);

  printf("\n\n3. Driver Details");
  printf("\nDriver name is  %s ",d3.name);
  printf("\nDriver Driving License no. is %d",d3.lic);
  printf("\nDriver Route is  %s",d3.route);
  printf("\nDriver Travelled %d Kilometers",d3.km);

  return 0;
}