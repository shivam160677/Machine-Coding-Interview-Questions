//
//  Board.cpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 15/09/21.
//

#include "Board.hpp"

Board::Board(){
    rows=10;
    cols=10;
}
Board::Board(int r, int c)
{
    rows=r;
    cols=c;
}
void Board::addSnake(int start, int end)
{
    snakes[start]=end;
}

void Board::addLadder(int start, int end)
{
    ladders[start]=end;
}

bool Board::isLadderPresent(int step)
{
    if(ladders.find(step)!=ladders.end())
    {
        return true;
    }
    return false;
}

int Board::ladderHop(int step)
{
    return ladders[step];
}

bool Board::isSnakePresent(int step)
{
    if(snakes.find(step)!=snakes.end())
    {
        return true;
    }
    return false;
}

int Board::snakeHop(int step)
{
    return snakes[step];
}
