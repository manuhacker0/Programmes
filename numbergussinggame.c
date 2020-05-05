#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int randnum;
int a;
void randumnumber()
{
    srand(time(NULL));
    randnum = 1 + rand() % 10;
}
void welcome()
{
    printf("welcome to number gussing game\n");
    printf("Please enter the number between 1 to 10 \n");
    randumnumber();
    scanf("%d", &a);
}
void main()
{
    _Bool isgameover = false;
    welcome();
    while (!isgameover)
    {
        if (a < randnum)
        {
            printf("Your number is smaller , Please enter a larger number\n");
            scanf("%d", &a);
        }
        else if (a > randnum)
        {
            printf("Your number is larger , Please enter a samller number \n");
            scanf("%d", &a);
        }
        else if (a == randnum)
        {

            printf("Great job , you have guess the right number");
            printf("\nif you want to plase once more than enter 'y' or press enter to exit\n");
            getchar();
            char userchoice;

            // scanf(" %c", &userchoice);
            userchoice = getchar();

            if (userchoice == 'y' || userchoice == 'Y')
            {
                welcome();
            }
            else
            {
                printf("Bye BYe ✌  ");
                isgameover = true;
            }
        }
    }
}