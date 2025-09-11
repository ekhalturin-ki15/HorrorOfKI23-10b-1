#pragma once
//#include "GameMode.h"
#include <memory>
#include <string>

class GameMode;

class Player
{
public:


    Player(std::shared_ptr<GameMode> _GM, int _hp, int _mind, std::string _name);


    int hp;
    int mind;
    std::string name;

    std::shared_ptr<GameMode> GM;
};
