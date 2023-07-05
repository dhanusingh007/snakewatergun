#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swag(int you, int com)
{
    if (com == you)
        return 0;
    if (you == 0 && com == 1)
        return 1;
    else if (you == 1 && com == 0)
        return -1;
    if (you == 1 && com == 2)
        return 1;
    else if (you == 2 && com == 1)
        return -1;
    if (you == 0 && com == 2)
        return -1;
    else if (you == 2 && com == 0)
        return 1;
    if (you > 2)
        return 3;
}
int main()
{
    int you, com, run = 0, comr = 0;
    int result;
    printf("\033[0;34m\n\v\vHello\e[1m\nWELCOME TO SNAKE WATER GUN GAME\n\vINTRODUCTION : \e[0m\nThis is snake water and gun game in which there is battle between these, three snake will drink the water and win, and water will spoil the gun and will be  win and gun will kill the snake and will be win\nBut  only one player at a time can play this game because other side will be computer to response if this was two player game then when first player input their turn then opponent could see his input and would be cheating. So you can play only with computer.\nYou do not need to write full name for snake etc..... your input must be (0=SNAKE,1=WATER,2=GUN)\n\v\v\e[1m\033[0m\n\033[0;34mRULES :\033[0;30m\e[0m\n1-(0=SNAKE,1=WATER,2=GUN)\n2-you can play until you win once you loss you will be out of the game with your score \n3- only 1 run for each win will be added (No run for draw for any opponent(whether it is player or computer))\n\v\v\v\033[0;34m\e[1mSO LET'S START\e[0m\n\033[0m  ");
    while (result != -1)
    {
        printf("\v\v\n\033[0;30mEnter 0 for snake , 1 for water and 2 for gun =\033[0m ");
        srand(time(0));
        com = rand() % 3;
        scanf("%d", &you);
        result = swag(you, com);
        if (result == 0)
            printf("\n\033[0;33mDraw\033[0m\v");
        else if (result == -1)
        {
            printf(" \n\033[0;31mYou loss\033[0m\v");
            comr++;
        }
        else if (result == 1)
        {
            printf("\n\033[0;32mYou won\033[0m\v ");
            run++;
        }
        else if (result == 3)
        {
            printf("\n\033[0;31mXXXXXX Wrong input XXXXXX\033[0m\v");
            exit(0);
        }

        printf("\n\033[0;35mYou chose %d and Computer chose %d\033[0m", you, com);
    };
    printf("\n\v\033[0;36mFinal score of computer is ((%d)) and your score is ((%d))\033[0m", comr, run);
    return 0;
}