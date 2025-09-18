#pragma once
#include <string>

class GameMode;
class InputController
{
    GameMode* GM;

public:
    std::string sText;
    InputController(GameMode* _GM);
    void InputInfo();

    void Input();
};
