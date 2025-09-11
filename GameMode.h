#pragma once
#include <fstream>
#include <iostream>
#include <memory>
// #include "Player.h"

class Player;
class GameStage;

//friend 
class GameMode
{
    std::ifstream configIn;
    std::ofstream logOut;

public:
    GameMode(std::shared_ptr<Player> _ptrPl, 
        std::shared_ptr<GameStage> _ptrGS);
    // TSubObject
    std::shared_ptr<Player>    ptrPl;    // 8 Байт
    std::shared_ptr<GameStage> ptrGS;
};
// ctrl K + ctlr D