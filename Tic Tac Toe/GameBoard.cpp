//
//  GameBoard.cpp
//  Tic Tac Toe
//
//  Created by MATTHEW S WOJNO on 12/4/14.
//  Copyright (c) 2014 Matthew Wojno. All rights reserved.
//

#include "GameBoard.h"
using namespace std;
void GameBoard::resetBoard(){

    for(int i = 0; i<5;i++){
        for(int b = 0; b<5;b++){
            
            if(b==1 && (i==0 || i == 2 || i==4)) {
                gb[i][b] = '|';
            }
            if(b == 2 && (i == 1 || i == 3)){
                gb[i][b] = '-';
            }
            if(b == 3 && (i==0 || i==2 || i==4)){
                gb[i][b] = '|';
            }
            if(b == 4 && (i==1 || i == 3)){
                gb[i][b] = '-';
            }
            if(b==0 && (i==0 || i==2 || i==4)){
                gb[i][b] = ' ';
            }
            if(b==0 && (i==1 || i==3)){
                gb[i][b] ='-';
            }
            if(b==1 && (i==1|| i==3)){
                gb[i][b] = '-';
            }
            if(b==2 && (i==0 || i==2 || i==4)){
                gb[i][b] = ' ';
            }
            if(b==3 && (i==1 || i==3)){
                gb[i][b] = '-';
            }
            if(b==4 && (i==0 || i==2 || i==4)){
                gb[i][b] = ' ';
            }
        }
        
    }
    
    for(int g = 0; g<5; g++){
        for(int y = 0; y<5; y++){
            cout<<gb[g][y]<<" ";
        }
        cout<<endl;
    }
    
}
