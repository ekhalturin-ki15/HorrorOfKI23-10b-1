#include "Player.h"

Player::Player(std::shared_ptr<GameMode> _GM, int _hp, int _mind,
               std::string _name)

	: GM(_GM) , hp(_hp)
    , mind(_mind)
    , name(_name)
{
}
