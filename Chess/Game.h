#pragma once
#include<iostream>
#include<vector>
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

	GameObject* blackPieces[16];
	GameObject* whitePieces[16];

	sf::Texture pawn;

	bool gameOver;
	
	sf::Event e;

};
