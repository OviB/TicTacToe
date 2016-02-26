//
//  Color.hpp
//  TicTacToe
//
//  Created by Ovidiu Bortas on 2/25/16.
//  Copyright © 2016 Ovidiu Bortas. All rights reserved.
//

#ifndef Color_hpp
#define Color_hpp

#include <stdio.h>
#include <ostream>


enum Code {
    FG_RED      = 31,
    FG_GREEN    = 32,
    FG_BLUE     = 34,
    FG_DEFAULT  = 39,
    BG_RED      = 41,
    BG_GREEN    = 42,
    BG_BLUE     = 44,
    BG_DEFAULT  = 49
};

class Color {
    Code code;
public:
    Color();
    Color(Code pCode);
    const std::string redColor();
    const std::string blueColor();
    const std::string defaultColor();
    friend std::ostream & operator<<(std::ostream& os, const Color& mod);
};

#endif /* Color_hpp */
