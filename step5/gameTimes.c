//
//  gameTimes.c
//  Rock Scissors Paper project 3
//
//  Created by hyungwook on 2021/03/03.
//

extern int victorycount;
extern int overallcount;

int GetPercentVictory(void)
{
    return (double)victorycount / overallcount * 100;
}
