#include "GameMode.h"
#include "GameStage.h"
#include "Player.h"

void GameMode::Init(Player* _ptrPl, GameStage* _ptrGS)
{
    ptrPl = _ptrPl;
    ptrGS = _ptrGS;

    ptrGS->GameLoop();
}
