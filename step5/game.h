//
//  game.h
//  Rock Scissors Paper project
//
//  Created by hyungwook on 2021/03/03.
//

#ifndef _GAME_H_
#define _GAME_H_

enum {SCISSORS = 1, ROCK, PAPER};

int ChoiceOfCom(void);
int ChoiceOfMe(void);
void WhoIsWinner(int com, int you);
void ShowRSP(int n);

#endif
