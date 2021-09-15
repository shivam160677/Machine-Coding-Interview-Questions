//
//  main.cpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 15/09/21.
//

#include <iostream>
#include <vector>
#include<time.h>
#include "Player.hpp"
#include "Board.hpp"

int main() {
    // create Board first
    Board game=Board();
    
    int numSnakes;
    cin>>numSnakes;
    for(int i=0;i<numSnakes;i++)
    {
        int head, tail;
        cin>>head>>tail;
        game.addSnake(head, tail);
    }
    
    int numLadders;
    cin>>numLadders;
    for(int i=0;i<numLadders;i++)
    {
        int head, tail;
        cin>>head>>tail;
        game.addLadder(head, tail);
    }
    
    int numPlayers;
    vector<Player>players;
    cin>>numPlayers;
    for(int i=0;i<numPlayers;i++)
    {
        string name;
        cin>>name;
        Player p=Player(name);
        players.push_back(p);
    }
    
    int turn=0, lastPos=0, lastPlayer=0;
    srand(int(time(0)));
    while(lastPos!=100)
    {
        int playerNo=turn%numPlayers;
        int diceval= (rand()%6)+1;
        int oldPosition=players[playerNo].getPosition();
        int newPosition=oldPosition+diceval;
        if(game.isLadderPresent(newPosition))
        {
            newPosition=game.ladderHop(newPosition);
        }
        else if(game.isSnakePresent(newPosition))
        {
            newPosition=game.snakeHop(newPosition);
        }
        players[playerNo].setPosition(newPosition);
        cout<<players[playerNo].getName()<<" rolled a "<<diceval<<" and moved from "<<oldPosition<<" to "<< newPosition<<endl;
        lastPos=newPosition;
        lastPlayer=playerNo;
        turn++;
    }
    cout<<players[lastPlayer].getName()<<" wins the game"<<endl;
    return 0;
}
