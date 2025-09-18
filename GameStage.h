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

	void SetInfo(Player* ptrPl);

	public:
    static EStage eStage;
    void GameLoop();
	GameMode* GM;

	void Clear();


public:
    GameStage(GameMode* _GM);
};
