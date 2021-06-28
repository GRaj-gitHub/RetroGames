#include "Game.h"

int main()
{
  
    //main window
    sf::RenderWindow window(sf::VideoMode(1100, 800), "Chess");
   
    //running game
    Game* newGame = new Game();

    while (window.isOpen())
    {
      
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            newGame->Init(window);
            newGame->Run();
        }
       
       

    }
    delete newGame;
    return 0;
}