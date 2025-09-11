#include "GameStage.h"
#include "GameMode.h"
#include "Player.h"
#include <string>

#define LINE "----------------------\n"

EStage GameStage::eStage = EStage::GameLoop;

void GameStage::SetInfo(std::shared_ptr<Player> ptrPl)
{
    sText += "У игрока " + ptrPl->name + "\n";
    sText += "Здоровье " + std::to_string(ptrPl->hp) + "\n";
    sText += "Рассудка " + std::to_string(ptrPl->mind) + "\n";
    sText += LINE;

}

void GameStage::GameLoop()
{
    while (true)
    {

        if ((!GM->ptrPl->hp) || ((!GM->ptrPl->mind)))
        {
            eStage = EStage::GameOver;
            break;
        }


        sText = "";

        SetInfo(GM->ptrPl);






    }
}
