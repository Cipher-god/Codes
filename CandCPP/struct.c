#include<stdio.h>
#include<string.h>
void fun(sld);
typedef struct soldier
{
  int id;
  int marks;
  char name[20];

}sld;

int main()
{
sld s1,s2,s3,s4;
strcpy(s1.name,"Lt.Dante Adams");
strcpy(s2.name,"Cpt.Martin Walker");
strcpy(s3.name,"Gen.Snake Boss");

s1.id=1;
s2.id=2;
s3.id=3;

s1.marks=89;
s2.marks=90;
s3.marks=99;

printf("1st soldier name is :");puts(s1.name);
printf("2nd soldier name is :");puts(s2.name);
printf("3rd soldier name is :");puts(s3.name);    

printf("1st Soldier id is : %d",s1.id);
printf("\n2nd Soldier id is : %d",s2.id);
printf("\n3rd Soldier id is : %d\n",s3.id);

printf("\n1st  Soldier marks is: %d",s1.marks);
printf("\n2nd  Soldier marks is: %d",s2.marks);
printf("\n3rd  Soldier marks is: %d",s3.marks);

fun(s4);

  return 0;

}
void fun(sld b)
{
  b=44;
  printf("S0ldier 4th id is : %d",b);
}