//
//  Board.hpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 15/09/21.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include<unordered_map>
using namespace std;

class Board{
private:
    int rows, cols;
    unordered_map<int, int>snakes, ladders;
public:
    Board();
    Board(int r, int c);
    void addSnake(int start, int end);
    void addLadder(int start, int end);
    bool isLadderPresent(int step);
    int ladderHop(int step);
    bool isSnakePresent(int step);
    int snakeHop(int step);
};

#endif /* Board_hpp */
