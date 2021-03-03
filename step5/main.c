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
int gameblingmoney = 0;

int main(int argc, const char * argv[]) {
    // insert code here...
    int com;
    int you;
    
    puts("자! 게임을 시작합니다.");
    
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

    
    printf("당신의 게임머니: %d\n", moneyme);
    printf("컴퓨터의 게임머니: %d\n\n", moneycom);

    while (1)
    {
        while (1)
        {
            printf("$판돈 설정합니다!$\n");
            printf("판돈 입력: ");
            scanf("%d", &gameblingmoney);
            
            if(gameblingmoney > moneyme)
            {
                printf("소유하고 있는 금액 내에서 거세요!\n");
                printf("당신의 현재 게임 머니: %d\n", moneyme);
                
            }
            else if(gameblingmoney > moneycom)
            {
                printf("컴퓨터 소유 금액 초과입니다!\n");
                printf("컴퓨터의 현재 게임 머니: %d\n", moneycom);
                
            }

            else
                break;
        }
        puts("");
        
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
        
        if((moneyme <= 0) || (moneycom <= 0))
            break;
    }
    
    puts("☆☆☆☆☆☆ 최종 결과 ☆☆☆☆☆☆");
    printf("최종 승률: %d %%\n", GetPercentVictory());
    printf("이용해 주셔서 고마워요~\n");

    return 0;
}
