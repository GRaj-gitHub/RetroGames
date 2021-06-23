#include "Game.h"

void Game::init()
{
}

void Game::Run()
{
	while (!gameOver)
	{
		//running

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			std::cout << "Vasanthi" << std::endl;
			e.type = sf::Event::Closed;
			gameOver = true;
		}
	}
}
