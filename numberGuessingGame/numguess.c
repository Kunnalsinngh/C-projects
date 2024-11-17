#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("WELCOME TO THE GAME \n");

    printf( "\nin this game the computer generates a random number and asks the player to guess it. When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number. \n\n");
  
  int randomnum = ("%d\n",(rand()%100)+1);
  int guess;
  int no_of_guess = 0;

  printf("Guess the number between 1 to 100\n");
  scanf("%d",&guess);
  
  while(guess != randomnum){
    
    if(guess>randomnum){
      printf("Your guess is greater than the number\n");
      printf("Guess the number between 1 to 100\n");
      scanf("%d",&guess);
    }

    else{
      printf("Your guess is lesser than the number\n");
      printf("Guess the number between 1 to 100\n");
      scanf("%d",&guess);
    }
  
    no_of_guess++;  
    
  }

  printf("congats\n");
  printf("you've cleared the game. \n");
  printf("you have guessed the number in %d attempts\n",no_of_guess);
  
  
  return 0;
}
