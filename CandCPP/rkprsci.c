#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cpu()
{

    srand(time(NULL));

    return rand() % 3;
}

int main()
{
    char p[10];
    int c, d, i;
    int player=0 , comp=0;

    printf("\n------------ ' ROCK ' PAPER ' SCISSORS '------------\n\n");

    printf("/* INSTRUCTIONS */\n Press 1 for(Rock)\nPress 2 for(paper)\nPress 3 for(Scissors)\n");
    printf("\nPLayer 1. Enter YOur Name: ");
    gets(p);

    for ( i = 0; i < 3; i++){
    printf("\n\nRound    %d\n",i+1);   
    printf("\n%s Your Turn : ",p);
    scanf("%d", &c);

    d = cpu()+1;
    printf("Cpu   Turn : %d\n", d);

    
    
    if(c==1){

        if (d == 1)
        {
            printf("Rock     Vs.   Rock");
            printf("\nGame Tie");
        }

        else if(d==2)
        {
            printf("Rock     Vs.   Paper");
            printf("\nCpu Wins \tCpu got 1 point");
            comp=comp+1;
        }

        else
        {
            printf("Rock     Vs.   Scissors");
            printf("\n%s Wins \t%s got 1 point",p,p);
            player=player+1;
        }
        

    }

    if(c==2){

        if (d == 1)
        {
            printf("Paper     Vs.   Rock");
            printf("\n%s Wins \t%s got 1 point",p,p);
            player=player+1;
        }

        else if(d==2)
        {
            printf("Paper     Vs.   Paper");
            printf("\nGame Tie");
        }

        else
        {
            printf("Paper     Vs.   Scissors");
            printf("\nCpu Wins \tCpu got 1 point");
            comp=comp+1;
        }
        

    }  

    if(c==3){

        if (d == 1)
        {
            printf("Scissors     Vs.   Rock");
            printf("\nCpu Wins \tCpu got 1 point");
            comp=comp+1;
        }

        else if(d==2)
        {
            printf("Scissors     Vs.   Paper");
            printf("\n%s Wins \t%s got 1 point",p,p);
            player=player+1;
        }

        else
        {
            printf("Scissors    Vs.   Scissors");
            printf("\nGame Tie",p);
        }
        getchar();
        

    }

    } //for ends here// 

    printf("\n\n[Score Board]\n"); 
    printf("\n%s Score is : %d",p,player);
    printf("\nCpu Score is :%d",comp) ;
    if(player>comp){
    printf("\nWinnner is %s",p);
    getchar();}

    else if(player==comp){
    printf("\nGame is Tie");
    getchar();}

    else{
    printf("\nWinner is Cpu");

    getchar();}
    



    

   return 0;
}