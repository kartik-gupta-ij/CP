#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("guess the number btw 1 to 100\n :-----");
    scanf("%d", &guess);
    while (number != guess)
    {
        if (number > guess)
        {
            printf("think bigger\n :-----");
        }
        else if (number < guess)
        {
            printf("think smaller\n :-----");
        }

        printf("guess the number\n :------");
        scanf("%d", &guess);
        nguess=nguess+1;
    }
    if (number == guess)
    {
        printf("******************\nyou guessed it in %d terms\n ********************",nguess);
    }
    return 0;
}
