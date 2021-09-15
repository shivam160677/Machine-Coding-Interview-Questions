//
//  Player.cpp
//  SnakeLadderGame
//
//  Created by Shivam Garg on 15/09/21.
//

#include "Player.hpp"
#include<iostream>


Player::Player(string str){
    pos=0;
    name=str;
}
void Player::setPosition(int val)
{
    pos=val;
}
int Player::getPosition()
{
    return pos;
}
string Player::getName(){
    return name;
}
