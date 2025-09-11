#pragma once
#include <fstream>
#include <iostream>
// #include "Player.h"

class Player;

class GameMode
{
    std::ifstream configIn;
    std::ofstream logOut;

public:
    Player* ptrPl;    // 8 Байт
};
// ctrl K + ctlr D