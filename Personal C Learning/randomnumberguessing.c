#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN=1;
    const int MAX=100;


    int guess;
    int guesses;
    int answer;
    //uses the current time as seed
    srand(time(0));
    //generates a random number between MIN and MAX.
    answer=rand()%MAX+MIN;

    
    printf("\n\n***RANDOM NUMBER GUESSING GAME***\n\n");
    do{
        
    printf("\nenter your guess: ");
    scanf("%d",&guess);
        if(guess<answer)
        {
            printf("Too Low!");
        }
        else if(guess>answer)
        {
            printf("Too High!");
        }
        else{
            printf("Correct!");
        }
        guesses++;


    }while(guess!=answer);

    printf("\nNumber was %d\n",answer);
    printf("Number of guesses: %d",guesses);

    return 0;
    
}


