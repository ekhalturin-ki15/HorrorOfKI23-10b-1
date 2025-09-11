#include "GameMode.h"
#include "GameStage.h"
#include "Player.h"


GameMode::GameMode(std::shared_ptr<Player>    _ptrPl,
                   std::shared_ptr<GameStage> _ptrGS)

{

    _ptrGS->GameLoop();
}
