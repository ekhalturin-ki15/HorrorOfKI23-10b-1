#include "Player.h"
#include "Enemy.h"

Player::Player(GameMode* _GM, int _hp, int _mind, int _iDamage,
               std::string _name)

	: GM(_GM), iHp(_hp), iMind(_mind), iDamage(_iDamage)
    , sName(_name)
{
}

void Player::Attack(Enemy* ptrEnemy)
{
    ptrEnemy->Damage(this);
}
