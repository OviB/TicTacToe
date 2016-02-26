//
//  GameManager.hpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/26/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "Board.hpp"

class GameManager {
    
    int player;
    int winner;
    int playerSelection;
    char mark;
    bool playAgain;
    int validInput();
    
public:
    GameManager();
    void startGame();
    void restartGame();

};


#endif /* GameManager_hpp */
