//
//  main.c
//  Rock Scissors Paper project
//
//  Created by hyungwook on 2021/03/03.
//

#include "common.h"
#include "game.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int com;
    int you;
    puts("자! 게임을 시작합니다.");
    puts("");
    
    puts("☆☆☆☆☆☆ 대결! ☆☆☆☆☆☆!!");
    com = ChoiceOfCom();
    you = ChoiceOfMe();
    puts("");
    
    puts("★★★★★★ 결과! ★★★★★★!!");
    WhoIsWinner(com, you);
    
    printf("ᐅ 컴퓨터의 선택은 %d \n", com);
    
    if(you == EVEN)
        puts("ᐅ 당신의 선택은 짝수. ");
    else
        puts("ᐅ 당신의 선택은 홀수. ");
    
    puts("");
    
    return 0;
}
