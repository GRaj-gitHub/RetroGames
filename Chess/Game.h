#pragma once
#include<iostream>
#include "GameObjects.h"

class Game
{
public:
	
	Game();
	~Game() {};

	void Init(sf::RenderWindow& w);
	void Run();

	sf::Event& GetCurrentEvent() { return e; }
protected:

	sf::Texture Bg;
	sf::Texture Board;

	sf::Sprite BgSprite;
	sf::Sprite BoardSprite;

	sf::Texture pawn;

	bool gameOver;
	
	sf::Event e;

	Pawn* p1;
};
