//
//  Game.h
//  Tic Tac Toe
//
//  Created by MATTHEW S WOJNO on 12/5/14.
//  Copyright (c) 2014 Matthew Wojno. All rights reserved.
//
#include <iostream>
#include <string>
#include "GameBoard.h"
using namespace std;
class Game: public GameBoard{
    public:
    bool checkWinner(string,string);
    void gamePlay1(int*, int*);
    void gamePlay2(int*, int*);
    void callGameBoard();
};