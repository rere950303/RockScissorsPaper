//
//  gameMoney.c
//  Rock Scissors Paper project 4
//
//  Created by hyungwook on 2021/03/03.
//

int moneyme = 1000;
int moneycom = 1000;

void ComWinMoneyAccount(void)
{
    moneycom += 200;
}

void ComLoseMoneyAccount(void)
{
    moneycom -= 200;
}


void MeWinMoneyAccount(void)
{
    moneyme += 200;
}

void MeLoseMoneyAccount(void)
{
    moneyme -= 200;
}
