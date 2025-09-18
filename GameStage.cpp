#include "GameStage.h"
#include "GameMode.h"
#include "InputController.h"
#include "Player.h"
#include <string>

#define LINE "----------------------\n"

EStage GameStage::eStage = EStage::GameLoop;

GameStage::GameStage(GameMode* _GM) : GM(_GM)
{


}

void GameStage::SetInfo(Player* ptrPl)
{
    sText += "У игрока " + ptrPl->sName + "\n";
    sText += "Здоровье " + std::to_string(ptrPl->iHp) + "\n";
    sText += "Рассудка " + std::to_string(ptrPl->iMind) + "\n";
    sText += LINE;

}

void GameStage::GameLoop()
{
    Clear();
    while (true)
    {

        if ((!GM->ptrPl->iHp) || ((!GM->ptrPl->iMind)))
        {
            eStage = EStage::GameOver;
            break;
        }
        SetInfo(GM->ptrPl);

        std::cout << sText;
        std::cout.flush();

        GM->ptrIC->Input();
        

        Clear();
    }
}

void GameStage::Clear()
{
    sText = "";
    GM->ptrIC->sText = "";
}
