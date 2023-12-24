#include<stdio.h>
#include<string.h>
int g;
union Student{

   int rank;
   int class;
   char name[20];
}std1,std2;

int main()
{

   int n;
   printf("Enter which student details you want to know");
   printf("\nPres 1 for Student 1 and Press 2 for Student2:  ");
   scanf("%d",&n);

   
 if (n==1)
 {
    
    strcpy(std1.name,"Cpt.Martin Walker");
    printf("\nStudent1 name is:%s",std1.name);

    printf("\nNow Enter 1 for(Rank) Or 2 for(Class): ");
    scanf("%d",&g);

    switch (g)
    {
     case 1:std1.rank=1;printf("The Rank is : %d",std1.rank);
     break;

     case 2:std1.class=10;printf("The Class is : %d",std1.class);
     break;
    
     default:printf("Not vaild statment");
     break;
    }
 }
 
 else if(n==2)
 {
   
   strcpy(std2.name,"Lt.Dante Adams");
   printf("\nStudent2 name is:%s",std2.name);

   printf("\nNow Enter 1 for(Rank) Or 2 for(Class): ");
   scanf("%d",&g);

 switch (g){

   case 1:std2.rank=2;printf("The Rank is : %d",std2.rank);
   break;

   case 2:std2.class=12;printf("The Class is : %d",std2.class);
   break;
    
   default:printf("Not vaild statment");
   break;

  }
 } 
  
 
 
 
 return 0;
}