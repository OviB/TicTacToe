//
//  Color.cpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/25/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#include "Color.hpp"

Color::Color(Code pCode) : code(pCode) {
    
}

std::ostream & operator<<(std::ostream& os, const Color& mod) {
    return os << "\033[" << mod.code << "m";
}

void red() {
    //code =
}
void blue() {
    
}