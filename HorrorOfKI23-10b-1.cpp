#include "GameMode.h"
#include "Player.h"
#include <fstream>
#include <iostream>

using namespace std;

#define PTR(x) std ::shared_ptr<x>

int main()
{
    PTR(GameMode) GM;
    PTR(GameStage) ptrGS = std::make_shared<GameStage>();
    PTR(Player) ptrPl    = std::make_shared<Player>();
    GM                   = std::make_shared<GameMode>(ptrGS, ptrPl);
}