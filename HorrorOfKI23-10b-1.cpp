#include "GameMode.h"
#include "GameStage.h"
#include "InputController.h"
#include "Player.h"
#include <fstream>
#include <iostream>

using namespace std;

#define PTR(x) x*

int main()
{
    setlocale(LC_ALL, "Russian");

    PTR(GameMode) GM   = new GameMode();
    PTR(Player) ptrPl  = new Player(GM, 6, 12, "Jach");
    PTR(Player) ptrPl2 = new Player(GM, 10, 7, "Mich");
    PTR(GameStage) ptrGS = new GameStage(GM);
    PTR(InputController) ptrIC = new InputController(GM);

    GM->Init(ptrPl, ptrGS);



}