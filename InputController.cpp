#include "InputController.h"
#include "GameMode.h"

#define LINE "~~~~~~~~~~~~~~~~~~~~~\n"

InputController::InputController(GameMode* _GM) : GM(_GM)
{
}

void InputController::InputInfo()
{
    sText += "Для очистки экрана введите '0' \n";
    sText += "Введите цель атаки \n";
    sText += LINE;
}

void InputController::Input()
{
    InputInfo();
    std::cin >> iChose;
}
