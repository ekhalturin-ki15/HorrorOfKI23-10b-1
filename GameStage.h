#pragma once
#include <string>
#include <memory>

class GameMode;
class Player;

enum EStage : __int8
{
	GameLoop = 0,
	GameOver,
	Size
};

class GameStage
{

	std::string sText;

	/*
	template<typename T>
	GameStage(T a)
	{

	}
	*/

	void SetInfo(std::shared_ptr<Player> ptrPl);

	public:
    static EStage eStage;
    void GameLoop();
	std::shared_ptr<GameMode> GM;

};
