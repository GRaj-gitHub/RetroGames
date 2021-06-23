#include "Game.h"

int main()
{
    //bg sprites and textures
    sf::Texture Bg;
    Bg.loadFromFile("../Assets/Images/Chess/Bg.png");
    sf::Sprite BgSprite(Bg);

    sf::Texture Board;
    Board.loadFromFile("../Assets/Images/Chess/Board.png", sf::IntRect(0,0,800,800));
    sf::Sprite BoardSprite(Board);

    //main window
    sf::RenderWindow window(sf::VideoMode(1100, 800), "Chess");
   
    //running game
    Game* newGame = new Game();

    while (window.isOpen())
    {
        sf::Event event = newGame->GetCurrentEvent();
        while (window.pollEvent(event))
        {
            newGame->Run();
            
            if (event.type == sf::Event::Closed)
                window.close();
            
        }   
        window.clear(sf::Color::Black);
       // newGame->init();
       
        window.draw(BgSprite);
        window.draw(BoardSprite);
        window.display();
    }

    return 0;
}