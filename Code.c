#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//function for calculating the result of the game
int gameplay(char u, char c){
  if((u=='R' || u=='r') && c=='P')
  return 0;
  else if((u=='R' || u=='r') && c=='S')
  return 1;
  else if((u=='P' || u=='p') && c=='R')
  return 1;
  else if((u=='P' || u=='p') && c=='S')
  return 0;
  else if((u=='S' || u=='s') && c=='R')
  return 0;
  else if((u=='S' || u=='s') && c=='P')
  return 1;
  else
  return 2;
}

//function to calculate a random number between 1 and 3
int randomNumber(){
  srand(time(0));
  int x=(rand()%(3-1+1))+1;  //upper=3,lower=1
  return x;
}

int main()
{
  char user, comp;
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t***WELCOME***\n\n");
  printf("___Let's play___\n");
  printf("\nGUIDELINES TO PLAY THE GAME:\n1. Press R or r for choosing rock");
  printf("\n2. Press P or p for choosing paper and,");
  printf("\n3. Press S or s for choosing scissors\n\n(NOTE: R/r=Rock; P/p=Paper; S/s=Scissors)\n");
  int y=randomNumber();  //assigning rock/paper/scissors to the computer
  if(y==1)
  comp='R';
  else if(y==2)
  comp='P';
  else
  comp='S';
  printf("\nEnter your choice: ");  //taking the user choice as an input to the program
  scanf("%c", &user);
  int result=gameplay(user, comp);
  printf("You chose %c and your opponent chose %c.\n", user, comp);
  if(result==1)  //displaying the result of the game
  printf("Hurray! You have won the game.:)");
  else if(result==0)
  printf("You lose! Better luck next time.:)");
  else
  printf("Match draw!:)");
  return 0; 
}


