//
//  Player.hpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 15/09/21.
//

#ifndef Player_hpp
#define Player_hpp

#include <iostream>
using namespace std;

class Player{
    string name;
    int pos;
public:
    Player(string str);
    void setPosition(int val);
    int getPosition();
    string getName();
};

#endif /* Player_hpp */
