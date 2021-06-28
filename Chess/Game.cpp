#include "Game.h"

Game::Game()
{
	//Basic Bg
	Bg.loadFromFile("../Assets/Images/Chess/Bg.png");
	BgSprite.setTexture(Bg);

	//Chess board
	Board.loadFromFile("../Assets/Images/Chess/Board.png", sf::IntRect(0, 0, 800, 800));
	BoardSprite.setTexture(Board);




	gameOver = false;
}

void Game::Init(sf::RenderWindow& w)
{
	w.clear(sf::Color::Black);
	w.draw(BgSprite);
	w.draw(BoardSprite);
	w.draw(p->GetSprite());
	w.display();
}

void Game::Run()
{
}
