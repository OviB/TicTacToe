//
//  Board.cpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/25/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#include "Board.hpp"

Board::Board() : redColor(FG_RED), blueColor(FG_BLUE), defaultColor(FG_DEFAULT) {
    loadLocationsArray();
    
}

// initialized the locations array
void Board::loadLocationsArray() {
    
    for (int x = 0; x < 9; x++) {
        locations[x] = x + 1;
    }
}


// Resets the board
void Board::reset() {
    loadLocationsArray();
}

void Board::updateDisplay() {
    
    // clears the terminal window
    //system("cls"); // - does not work
    
    cout << "\n\n\t\t   Tic Tac Toe\n\n";
    
    cout << "\t" << redColor << "Player 1 (X)\t-\t" << blueColor << "Player 2 (O)" << defaultColor << endl << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locations[0] << "  |  " << locations[1] << "  |  " << locations[2] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locations[3] << "  |  " << locations[4] << "  |  " << locations[5] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locations[6] << "  |  " << locations[7] << "  |  " << locations[8] << endl;
    
    
}