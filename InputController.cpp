#include "InputController.h"
#include "GameMode.h"

#define LINE "~~~~~~~~~~~~~~~~~~~~~\n"


InputController::InputController(GameMode* _GM) : GM(_GM)
{
}

void InputController::InputInfo()
{
    sText += "��� ������� ������ ������� '0' \n";
    sText += "������� ���� ����� \n";
    sText += LINE;
}







void InputController::Input()
{
    sText = "";
    InputInfo();



}
