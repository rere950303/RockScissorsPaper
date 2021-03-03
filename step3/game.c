//
//  game.c
//  Rock Scissors Paper project
//
//  Created by hyungwook on 2021/03/03.
//

#include <time.h>
#include "common.h"
#include "game.h"

int victorycount = 0;

int ChoiceOfCom(void)
{
    srand((unsigned int)time(0));
    return rand() % 3 + 1;
}

int ChoiceOfMe(void)
{
    int n = 0;
    printf("가위<1> 바위<2> 보<3> 종료<4> 선택? ");
    scanf("%d", &n);
    
    return n;
}

void WhoIsWinner(int com, int you)
{
    if(com == you)
        printf("비겼습니다.\n");
    
    else if((com == 1) && (you == 2))
    {
        printf("당신이 승자입니다.\n");
        victorycount++;
    }
    
    else if((com == 2) && (you == 3))
    {
        printf("당신이 승자입니다.\n");
        victorycount++;
    }
    
    else if((com == 3) && (you == 1))
    {
        printf("당신이 승자입니다.\n");
        victorycount++;
    }
    
    else
        printf("컴퓨터가 승자이군요!\n");
}

void ShowRSP(int n)
{
    switch(n)
    {
        case 1:
            printf("가위");
            break;
        case 2:
            printf("바위");
            break;
        case 3:
            printf("보");
            break;
    }
}
