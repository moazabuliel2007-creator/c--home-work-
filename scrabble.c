#include <cs50.h>
#include <stdio.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{

    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int score1 = 0;
    int score2 = 0;

    for (int i = 0; p1[i] != '\0'; i++)
    {
        if (p1[i] >= 'A' && p1[i] <= 'Z')
        {
            score1 += points[p1[i] - 'A'];
        }
        else if (p1[i] >= 'a' && p1[i] <= 'z')
        {
            score1 += points[p1[i] - 'a'];
        }
    }

    for (int i = 0; p2[i] != '\0'; i++)
    {
        if (p2[i] >= 'A' && p2[i] <= 'Z' )
        {
            score2 += points[p2[i] - 'A'];
        }
        else if (p2[i] >= 'a' && p2[i] <= 'z')
        {
            score2 += points[p2[i] - 'a'];
        }
    }



    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}







