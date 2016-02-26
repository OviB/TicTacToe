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
    int locations[9];
    void loadLocationsArray();
    Color redColor;
    Color blueColor;
    Color defaultColor;
    
    
public:
    Board();
    void reset();
    void updateDisplay();
    
    
    
    
    
    
};

#endif /* Board_hpp */
