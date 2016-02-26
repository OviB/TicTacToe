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

Color::Color() : code(FG_DEFAULT) {
    
}

std::ostream & operator<<(std::ostream& os, const Color& mod) {
    return os << "\033[" << mod.code << "m";
}

const std::string Color::redColor() {
    return "\033[;31m";
}
const std::string Color::blueColor() {
    return "\033[;34m";
}
const std::string Color::defaultColor() {
    return "\033[;39m";
}