//
//  main.cpp
//  Tic Tac Toe
//
//  Created by MATTHEW S WOJNO on 12/4/14.
//  Copyright (c) 2014 Matthew Wojno. All rights reserved.
//

#include <iostream>
#include <string>
#include "Game.h"
using namespace std;
int main() {
    
    Game game;
    int rowPlayer1, colPlayer1;
    int rowPlayer2, colPlayer2;
    string player1, player2;
    bool winner = false;
    char playAgain;
    
    cout<<endl<<endl<<"Welcome to Tic Tac Toe!!"<<endl;
    cout<<"Player one what is your name? "<<endl;
    cin>>player1;
    cout<<"Player two what is your name? "<<endl;
    cin>>player2;
    cout<<endl;
    cout<<"Player one you will be 'X'"<<endl;
    cout<<"Player two you will be 'O'"<<endl;
   cout<<endl;
   
    game.callGameBoard();
    cout<<endl;
    
    while(!winner){
      
        
            cout<<player1 << ",pick a row and column to move to: "<<endl;
            cout<<"Row: ";
            cin>>rowPlayer1;
        
            cout<<"Column: ";
            cin>>colPlayer1;
            cout<<endl;
            game.gamePlay1(&rowPlayer1,&colPlayer1);
        
            if(game.checkWinner(player1, player2)){
                game.checkWinner(player1, player2);
                break;
            }

            cout<<endl;
            
            cout<<player2 << ",pick a row and column to move to: "<<endl;
            cout<<"Row: ";
            cin>>rowPlayer2;
        
            cout<<"Column: ";
            cin>>colPlayer2;
            cout<<endl;
            game.gamePlay2(&rowPlayer2,&colPlayer2);
    
            if(game.checkWinner(player1, player2)){
            game.checkWinner(player1, player2);
                break;
            }
            cout<<endl;
        
    }

    
    cout<<endl<<"If you would like to play again enter 'y'. If not enter 'n'. ";
    cin>>playAgain;
    
    if(playAgain == 'y'){
        main();
    }else if(playAgain == 'n'){
        exit(0);
    }
    
    
}
