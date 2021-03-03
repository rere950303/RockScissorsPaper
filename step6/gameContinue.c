//
//  gameContinue.c
//  Rock Scissors Paper project 6
//
//  Created by hyungwook on 2021/03/03.
//

#include "common.h"

extern int moneyme;
extern int moneycom;
extern int victorycount;
extern int overallcount;

void DataStore(void)
{
    FILE *fp = fopen("gamedata.txt", "w");
    
    fprintf(fp, "%d ", moneyme);
    fprintf(fp, "%d ", moneycom);
    fprintf(fp, "%d ", victorycount);
    fprintf(fp, "%d ", overallcount);
    
    fclose(fp);
}
