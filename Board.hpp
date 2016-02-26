//
//  Board.hpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/25/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <iostream>
#include "Color.hpp"

using namespace std;

class Board {
private:
    char locations[9];
    string color[9];
    string locationColor[9];
    void loadLocationsArray();
    void loadColorArray();
    
    
public:
    Board();
    void updateDisplay();
    bool placeMarkInlocation(char mark, int selection);
    int checkWin();
    void markWin();
    void reset();
    
    
    
    
    
    
};

#endif /* Board_hpp */
