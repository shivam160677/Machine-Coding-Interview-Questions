//
//  SnakeLadderService.hpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 18/09/21.
//

#ifndef SnakeLadderService_hpp
#define SnakeLadderService_hpp

#include <iostream>
#include<unordered_map>
#include<vector>
#include "Player.hpp"
#include "Board.hpp"

using namespace std;

class SnakeLadderService{
    Board game;
    
public:
    SnakeLadderService();
    void userInput();
    void startGame();
};

#endif /* SnakeLadderService_hpp */
