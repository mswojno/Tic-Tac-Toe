//
//  Game.cpp
//  Tic Tac Toe
//
//  Created by MATTHEW S WOJNO on 12/5/14.
//  Copyright (c) 2014 Matthew Wojno. All rights reserved.
//

#include "Game.h"
#include <iostream>
using namespace std;

bool Game::checkWinner(string player1, string player2){
    
    int fill = 0;
   for(int i = 0; i<5;i++){
        for(int b = 0; b<5;b++){
           if(gb[0][b] == 'X' && gb[2][b]== 'X' && gb[4][b] == 'X'){
                cout<<endl<<player1<< " Wins! Game Over.";
               return true;
            }
            if(gb[i][0] == 'X' && gb[i][2] == 'X' && gb[i][4] == 'X'){
                cout<<endl<<player1<< " Wins! Game Over.";
                return true;
            }
            if(gb[0][b] == 'O' && gb[2][b]== 'O' && gb[4][b] == 'O'){
                cout<<endl<<player2<< " Wins! Game Over.";
                return true;
            }
            if(gb[i][0] == 'O' && gb[i][2] == 'O' && gb[i][4] == 'O'){
                cout<<endl<<player2<< " Wins! Game Over.";
                return true;
            }
       }
    
   }
    if(gb[1][1] == 'X' && gb[2][2] == 'X' && gb[3][3] == 'X'){
        cout<<endl<<player1<<" Wins! Game over.";
        return true;
    }
    if(gb[1][1] == 'O' && gb[2][2] == 'O' && gb[3][3] == 'O'){
        cout<<endl<<player2<<" Wins! Game over.";
        return true;
    }
    if(gb[1][3] == 'X' && gb[2][2] == 'X' && gb[3][1] == 'X'){
        cout<<endl<<player1<<" Wins! Game over.";
        return true;
    }
    if(gb[1][3] == 'X' && gb[2][2] == 'X' && gb[3][1] == 'X'){
        cout<<endl<<player1<<" Wins! Game over.";
        return true;
    }
    
    for(int u = 0; u<5;u++){
        for(int d = 0; d<5; d++){
            if(gb[u][d] != ' '){
                fill++;
            }
        }
    }
    if(fill == 25){
        cout<<endl<<"There is no clear winner or cats game! Game over.";
        return true;
    }
   
    return false;
    
}
void Game::gamePlay1(int *row, int *col){
    if(*row == 3){
        *row = 4;
    }
    if(*row ==1){
        *row =0;
    }
    if(*col == 1){
        *col = 0;
    }
    if(*col == 3){
        *col = 4;
    }
    
    gb[*row][*col] = 'X';
    
    for(int g = 0; g<5; g++){
        for(int y = 0; y<5; y++){
            cout<<gb[g][y]<<" ";
        }
        cout<<endl;
    }
}

void Game::gamePlay2(int *row, int *col){
    if(*row == 3){
        *row = 4;
    }
    if(*row ==1){
        *row =0;
    }
    if(*col == 1){
        *col = 0;
    }
    if(*col == 3){
        *col = 4;
    }
    
    gb[*row][*col] = 'O';
    
    for(int g = 0; g<5; g++){
        for(int y = 0; y<5; y++){
            cout<<gb[g][y]<<" ";
        }
        cout<<endl;
    }
}

void Game::callGameBoard(){
    resetBoard();
}