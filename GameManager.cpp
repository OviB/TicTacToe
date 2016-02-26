//
//  GameManager.cpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/26/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#include "GameManager.hpp"

GameManager::GameManager() {
    player = 1;
}

void GameManager::startGame() {
    playAgain = NULL;
    
    do {
        
        Board theBoard;
        
        do {
            theBoard.updateDisplay();
            
            // selects whos turn it is
            player = (player % 2) ? 1 : 2;
            
            // select player color
            (player == 1) ? cout << Color().redColor() : cout << Color().blueColor();
            
            cout << endl << "\tPlayer " << player << Color().defaultColor() << ", select a position: ";
            playerSelection = validInput();
            
            mark = (player == 1) ? 'X' : 'O';
            
            // places the mark on the board if its valid
            while (!theBoard.placeMarkInlocation(mark, playerSelection)) {
                
                // if selection is invalid then a warning message is displayed
                cout << "Invalid selection!";
                
                (player == 1) ? cout << Color().redColor() : cout << Color().blueColor();
                cout << endl << "\tPlayer " << player << Color().defaultColor() << ", select a position: ";
                playerSelection = validInput();
            }
            
            // check the board for a winner
            winner = theBoard.checkWin();
            
            player++;
            
        } while (winner == -1);
        
        // update display after someone wins
        theBoard.updateDisplay();
        
        
        if (winner == 1) {
            (--player == 1) ? cout << Color().redColor() : cout << Color().blueColor();
            cout << "Player " << player << Color().defaultColor() << " won!" << endl;
        }
        else {
            cout << "Game is a Draw." << endl;
        }
        
        //cin.ignore();
        cin.get();
        
        char again;
        
        cout << "Play again? (y/n)" << endl;
        cin >> again;
        
        while (again != 'y' && again != 'Y' && again != 'n' && again != 'N') {
            cout << "Invalid Choice!" << endl;
            
            cout << "Play again? (y/n)";
            cin >> again;
        }
        
        playAgain = (again == 'y' && again != 'Y') ? true : false;
        
    } while (playAgain);
}

int GameManager::validInput()
{
    int x;
    std::cin >> x;
    while(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Bad entry.  Enter a NUMBER: ";
        std::cin >> x;
    }
    return x;
}