#pragma once
class GameMode;
class Player;

class Enemy
{
public:

    Enemy(GameMode* _GM);

    int iHp;
    int iHpDamage;
    int iMindDamage;
    int iExp;

    void Damage(Player* ptrPl);
    void Active(Player* ptrPl);
    void Defeat(Player* ptrPl);


    GameMode* GM;
};
