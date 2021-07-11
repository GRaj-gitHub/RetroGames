#include<SFML/Graphics.hpp>
#include<time.h>

int main()
{
	sf::RenderWindow window(sf::VideoMode(480, 720), "Tetris!");

	sf::Texture Bg;
	Bg.loadFromFile("../Assets/Images/Tetris/Bg.png");

	sf::Sprite BgSprite(Bg);

	while (window.isOpen())
	{
		sf::Event e;

		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
			{
				window.close();
			}
			window.clear(sf::Color::White);
			window.draw(BgSprite);
			window.display();
		}

	}
}
