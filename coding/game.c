#include<stdio.h>
int main()
{
    int secret=50;
    int guess;
    int attemps;
    printf("ENTER A NUMBER (1 TO 100):");
    scanf(" %d", &guess);
    while(guess!=secret)
    {
        attemps++;
    if(guess>secret)
    {
        printf("TOO HIGH! TRY AGAIN\n");
    }
    else
    {
        printf("TOO LOW! TRY AGAIN\n");
    }
    printf("ENTER A NUMBER (1 TO 100):");    
    scanf(" %d", &guess);
    }
    printf("CONGRATULATIONS! YOU GUESSED THE NUMBER!");
    return 0;

}