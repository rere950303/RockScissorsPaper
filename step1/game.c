//
//  game.c
//  Rock Scissors Paper project
//
//  Created by hyungwook on 2021/03/03.
//

#include <time.h>
#include "common.h"
#include "game.h"

int ChoiceOfCom(void)
{
    srand((unsigned int)time(0));
    return rand() & 100;
}

int ChoiceOfMe(void)
{
    int n = 0;
    printf("홀수이면 1, 짝수이면 2를 입력: ");
    scanf("%d", &n);
    
    return n;
}

void WhoIsWinner(int com, int you)
{
    if((com % 2 == 1) && (you == 1))
        printf("당신이 승자입니다!\n");
    else if((com % 2 == 0) && (you == 2))
        printf("당신이 승자입니다.\n");
    else
        printf("컴퓨터가 승자이군요!\n");
}
