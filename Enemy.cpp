#include "Enemy.h"
#include "GameMode.h"
#include "Player.h"


Enemy::Enemy(GameMode* _GM)
    : GM(_GM)
{
    
}


void Enemy::Damage(Player* ptrPl)
{
    iHp -= ptrPl->iDamage;
    if (iHp < 0)
        Defeat(ptrPl);
}

void Enemy::Active(Player* ptrPl)
{
    ptrPl->iHp -= iHpDamage;
    ptrPl->iMind -= iMindDamage;
}

void Enemy::Defeat(Player* ptrPl)
{
    GM->ptrPl->iExp += iExp;
}
