#include<stdio.h>
#include<stdlib.h>

int main(){
  
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
  printf("you have guessed the number in %d attempts\n",no_of_guess);
  
  
  return 0;
}
