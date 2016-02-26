//
//  Board.cpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/25/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#include "Board.hpp"

Board::Board(){
    loadLocationsArray();
    loadColorArray();
    
}

// initialized the locations array
void Board::loadLocationsArray() {
    
    
    for (int x = 0; x < 9; x++) {
        locations[x] = std::to_string(x + 1)[0]; // converts int to string and then only using the fist position
        
    }
}

void Board::loadColorArray() {
    
    for (int x = 0; x < 9; x++) {
        color[x] = Color().defaultColor();
    }
}

void Board::updateDisplay() {
    
    // clears the terminal window
    system("clear"); // - does not work
    
    cout << "\n\n\t\t   Tic Tac Toe\n\n";
    
    cout << Color().redColor() << "\tPlayer 1 (X)";
    cout << Color().defaultColor() << "\t-\t";
    cout << Color().blueColor() << "Player 2 (O)" << Color().defaultColor() << endl << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locationColor[0] << "  |  " << locationColor[1] << "  |  " << locationColor[2] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locationColor[3] << "  |  " << locationColor[4] << "  |  " << locationColor[5] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << locationColor[6] << "  |  " << color[7] << locationColor[7] << "  |  " << color[8] << locationColor[8] << endl;
    cout << "\t\t     |     |     " << endl;
    
}

bool Board::placeMarkInlocation(char mark, int selection) {
    
    bool isValid = true;
    
    if (selection == 1 && locations[0] == '1') {
        locations[0] = mark;
        color[0] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 2 && locations[1] == '2') {
        locations[1] = mark;
        color[1] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 3 && locations[2] == '3') {
        locations[2] = mark;
        color[2] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 4 && locations[3] == '4') {
        locations[3] = mark;
        color[3] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 5 && locations[4] == '5') {
        locations[4] = mark;
        color[4] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 6 && locations[5] == '6') {
        locations[5] = mark;
        color[5] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 7 && locations[6] == '7') {
        locations[6] = mark;
        color[6] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 8 && locations[7] == '8') {
        locations[7] = mark;
        color[7] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else if (selection == 9 && locations[8] == '9') {
        locations[8] = mark;
        color[8] = (mark == 'X') ? Color().redColor() : Color().blueColor();
    }
    else
        isValid = false;
    
    for (int x = 0; x < 9; x++) {
        if (locations[x] == 'X')
            locationColor[x] = Color().redColor() + "X" + Color().defaultColor();
        else if (locations[x] == 'O')
            locationColor[x] = Color().blueColor() + "O" + Color().defaultColor();
        }
        
    updateDisplay();
    
    return isValid;
}

// 1: winner, 0: tie, -1: ongoing game
int Board::checkWin() {
    
    // if 1 is returned someone got 3 in a row
    if (locations[0] == locations[1] && locations[1] == locations[2])
        
        return 1;
    else if (locations[3] == locations[4] && locations[4] == locations[5])
        
        return 1;
    else if (locations[6] == locations[7] && locations[7] == locations[8])
        
        return 1;
    else if (locations[0] == locations[3] && locations[3] == locations[6])
        
        return 1;
    else if (locations[1] == locations[4] && locations[4] == locations[7])
        
        return 1;
    else if (locations[2] == locations[5] && locations[5] == locations[8])
        
        return 1;
    else if (locations[0] == locations[4] && locations[4] == locations[8])
        
        return 1;
    else if (locations[2] == locations[4] && locations[4] == locations[6])
        
        return 1;
    // if all the locations are filled and no winner, than its a tie
    else if (locations[0] != '1' && locations[1] != '2' && locations[2] != '3'
             && locations[3] != '4' && locations[4] != '5' && locations[5] != '6'
             && locations[6] != '7' && locations[7] != '8' && locations[8] != '9')
        
        return 0;
    // the game is still on going
    else
        return -1;
}

void Board::markWin() {
    if (locations[0] == locations[1] && locations[1] == locations[2])
        
        
    else if (locations[3] == locations[4] && locations[4] == locations[5])
        
        return 1;
    else if (locations[6] == locations[7] && locations[7] == locations[8])
        
        return 1;
    else if (locations[0] == locations[3] && locations[3] == locations[6])
        
        return 1;
    else if (locations[1] == locations[4] && locations[4] == locations[7])
        
        return 1;
    else if (locations[2] == locations[5] && locations[5] == locations[8])
        
        return 1;
    else if (locations[0] == locations[4] && locations[4] == locations[8])
        
        return 1;
    else if (locations[2] == locations[4] && locations[4] == locations[6])
        
        return 1;
}


// Resets the board
void Board::reset() {
    loadLocationsArray();
    loadColorArray();
}