//
//  main.c
//  Rock Scissors Paper project
//
//  Created by hyungwook on 2021/03/03.
//

#include "common.h"
#include "game.h"
#include "gameTimes.h"

int overallcount = 0;
extern int moneyme;
extern int moneycom;

int main(int argc, const char * argv[]) {
    // insert code here...
    int com;
    int you;
    
    puts("자! 게임을 시작합니다.");
    puts("");
    
    while (1)
    {
        puts("☆☆☆☆☆☆ 대결! ☆☆☆☆☆☆!!");
    
        you = ChoiceOfMe();

        if(you == 4)
            break;
        
        com = ChoiceOfCom();

        puts("");
    
        puts("★★★★★★ 결과! ★★★★★★!!");
        WhoIsWinner(com, you);
    
        printf("ᐅ 컴퓨터의 선택: ");
        ShowRSP(com);
        puts("");
    
        printf("ᐅ 당신의 선택: ");
        ShowRSP(you);
        puts("");
        overallcount++;
        
        printf("승률: %d %%\n", GetPercentVictory());
        printf("게이머 머니: %d\n", moneyme);
        printf("컴퓨터 머니: %d\n\n", moneycom);
        
        if((moneyme == 0) || (moneycom == 0))
            break;
    }
    
    puts("☆☆☆☆☆☆ 최종 결과 ☆☆☆☆☆☆");
    printf("최종 승률: %d %%\n", GetPercentVictory());
    printf("이용해 주셔서 고마워요~\n");

    return 0;
}
