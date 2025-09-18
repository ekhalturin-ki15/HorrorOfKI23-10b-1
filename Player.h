#pragma once
// #include "GameMode.h"
#include <memory>
#include <string>

class GameMode;
class Enemy;

class Player
{
public:
    Player(GameMode* _GM, int _hp, int _mind, int _iDamage, std::string _name);

    int         iHp;
    int         iMind;
    int         iExp;
    int         iDamage;
    std::string sName;


    void Attack(Enemy* ptrEnemy);

    GameMode* GM;
};
