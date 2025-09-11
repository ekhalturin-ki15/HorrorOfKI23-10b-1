#include "GameMode.h"
#include "GameStage.h"
#include "Player.h"
#include <fstream>
#include <iostream>

using namespace std;

#define PTR(x) std ::shared_ptr<x>

int main()
{
    PTR(GameMode) GM;

    std::shared_ptr<GameStage> ptrGS  = std::make_shared<GameStage>(GM);
    PTR(Player) ptrPl  = std::make_shared<Player>(GM, 6, 12, "Jach");
    PTR(Player) ptrPl2 = std::make_shared<Player>(GM, 10, 7, "Mich");
    GM->Init(ptrPl, ptrGS);



}