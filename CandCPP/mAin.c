#include<stdio.h>
#include<windows.h>
int main()
{

   COORD z;
   z.X=8;
   z.Y=6;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),z);
   printf("Cooooool i'm on the Middle typer:");

   return 0;
}