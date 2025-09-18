#include "GameMode.h"
#include "GameStage.h"
#include "InputController.h"
#include "Player.h"

void GameMode::Init(Player* _ptrPl, GameStage* _ptrGS, InputController* _ptrIC)
{
    ptrPl = _ptrPl;
    ptrGS = _ptrGS;
    ptrIC = _ptrIC;

    ptrGS->GameLoop();
}
