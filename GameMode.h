#pragma once
#include <fstream>
#include <iostream>
#include <memory>
// #include "Player.h"

class Player;
class GameStage;
class InputController;

//friend 
class GameMode
{
    std::ifstream configIn;
    std::ofstream logOut;

public:

    GameMode() = default;

    void Init(Player* _ptrPl, 
        GameStage* _ptrGS, InputController* ptrIC);
    // TSubObject
    Player*    ptrPl;    // 8 Байт
    GameStage* ptrGS;
    InputController* ptrIC;
};
// ctrl K + ctlr D