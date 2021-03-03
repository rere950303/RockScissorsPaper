//
//  gameMoney.c
//  Rock Scissors Paper project 4
//
//  Created by hyungwook on 2021/03/03.
//
#include <stdio.h>

int moneyme = 1000;
int moneycom = 1000;
extern int gameblingmoney;

void ComWinMoneyAccount(void)
{
    moneycom += gameblingmoney;
}

void ComLoseMoneyAccount(void)
{
    moneycom -= gameblingmoney;
}


void MeWinMoneyAccount(void)
{
    moneyme += gameblingmoney;
}

void MeLoseMoneyAccount(void)
{
    moneyme -= gameblingmoney;
}

void getmemoney(void)
{
    while(1)
    {
        printf("# 당신의 머니를 입력하세요: ");
        scanf("%d", &moneyme);
        if(moneyme < 0)
        {
            printf("다시 입력하세요!\n");
        }
        else
            break;
    }
}
