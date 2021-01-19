#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you , char comp)
{// returns 1 if you win, -1 if you loose and 0 if draw.
        // draw condition.
        //cases covered:
        //ss
        //ww
        //gg
          if(you==comp)
          {
              return 0;
          }
           /*non-draw condition.
             conditions covered:
           sw
           ws
           gs
           sg
           gw
           wg*/
            if(you=='s' && comp=='w')
          {
              return 1;
          }
          else if(you=='w' && comp=='s')
          { 
              return -1;
          }

           if(you=='g' && comp=='s')
          {
              return 1;
          }
          else if(you=='s' && comp=='g')
          { 
              return -1;
          }

          if(you=='g' && comp=='w')
          {
              return -1;
          }
          else if(you=='w' && comp=='g')
          { 
              return 1;
          }
}
int main()
{
    
        int number,n;
    char you,comp;
    printf("\n\n\t\t\t*****WELCOME TO 'SNAKE', 'WATER' AND 'GUN' GAME..*****\n\t\t");
    srand(time(0));
    number=rand()%100+1 ; // generates random number between 1 - 10
     //printf("Number is %d ", number);
    if(number>33){
        comp='s';
    }
    else if(number>33 && number<66)
    {
        comp='w';
    }
    else 
    {
        comp='g';
    }
    printf("Enter :\n 's' for snake.\n 'w' for water.\n 'g' for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you , comp);
    printf("You choose %c and computer choose %c\n",you,comp);
    if(result==0)
    {
        printf("GAME DRAW!!\n");
    }
    else if(result==1)
    {
        printf("YOU WON(•̀ .̫ •́ )✧!!\n");
    }
    else 
    {
        printf("OH! YOU LOOSE..\n");
    }
    
    
return 0;
}