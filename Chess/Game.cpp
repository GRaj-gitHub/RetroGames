#include "Game.h"

Game::Game()
{
	
	Bg.loadFromFile("../Assets/Images/Chess/Bg.png");
	BgSprite.setTexture(Bg);

	
	Board.loadFromFile("../Assets/Images/Chess/Board.png", sf::IntRect(0, 0, 800, 800));
	BoardSprite.setTexture(Board);

	p1 = new Pawn();
	pawn.loadFromFile("../Assets/Images/Chess/Pieces.png", sf::IntRect(0, 0, 64, 64));
	p1->SetTexture(pawn);
	p1->MakeSprite();

	gameOver = false;
}

void Game::Init(sf::RenderWindow& w)
{
	w.clear(sf::Color::Black);
	w.draw(BgSprite);
	w.draw(BoardSprite);
	w.draw(p1->GetSprite());
	w.display();
}

void Game::Run()
{
}
