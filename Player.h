#pragma once
//#include "GameMode.h"
#include <memory>
#include <string>

class GameMode;

class Player
{
public:


    Player(GameMode* _GM, int _hp, int _mind, std::string _name);


    int iHp;
    int iMind;
    std::string sName;

    GameMode* GM;
};
