#include "GameMode.h"
#include "GameStage.h"
#include "Player.h"

void GameMode::Init(std::shared_ptr<Player>    _ptrPl,
                   std::shared_ptr<GameStage> _ptrGS)
{
    ptrPl = //?? move shared_ptrPl;
    ptrGS = _ptrGS;
    ptrGS->GameLoop();
}
