#include "Player.h"

Player::Player(GameMode* _GM, int _hp, int _mind,
               std::string _name)

	: GM(_GM) , iHp(_hp)
    , iMind(_mind)
    , sName(_name)
{
}
