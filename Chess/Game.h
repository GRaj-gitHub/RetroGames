#pragma once
#include<iostream>
#include "GameObjects.h"

class Game
{
public:
	
	Game() {};
	~Game() {};

	void init();
	void Run();

	sf::Event& GetCurrentEvent() { return e; }
protected:
	bool gameOver;
	sf::Event e;
};
