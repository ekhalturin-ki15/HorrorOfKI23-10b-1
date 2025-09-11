#pragma once
//#include "GameMode.h"
#include <memory>
#include <string>

class GameMode;

class Player
{
public:
    int hp;
    int mind;
    std::string name;

    std::shared_ptr<GameMode> GM;
};
