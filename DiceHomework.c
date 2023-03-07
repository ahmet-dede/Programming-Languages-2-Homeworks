// Dice Homework
// Ahmet Dede 2110213569
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice1, dice2, sum, point;

    srand(time(NULL));

    dice1 = (rand() % 6) + 1;
    dice2 = (rand() % 6) + 1;
    sum = dice1 + dice2;

    printf("Dices: %d, %d Sum: %d\n", dice1, dice2, sum);

    // İlk atışta 7 veya 11 gelirse oyuncu kazanır.
    if (sum == 7 || sum == 11)
    {
        printf("You won!\n");
        return 0;
    }
    // İlk atışta 2, 3 veya 12 gelirse oyuncu kaybeder.
    else if (sum == 2 || sum == 3 || sum == 12)
    {
        printf("You lose.\n");
        return 0;
    }
    // İlk atışta 4,5,6,8,9,10 gelirse bu oyuncunun puanı olur.
    else
    {
        printf("Your point: %d\n", sum);
        point = sum;
    }
    // Oyuncu 7 atmadan önce kendi puanını tutturmalıdır.
    while (1)
    {
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;
        sum = dice1 + dice2;
        printf("Dices: %d, %d Sum: %d\n", dice1, dice2, sum);
        if (sum == 7)
        {
            printf("You lose.\n");
            break;
        }

        else if (point == sum)
        {
            printf("You won!\n");
            break;
        }
    }
    return 0;
}