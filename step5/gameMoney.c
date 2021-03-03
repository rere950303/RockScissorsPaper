//
//  gameMoney.c
//  Rock Scissors Paper project 4
//
//  Created by hyungwook on 2021/03/03.
//

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
