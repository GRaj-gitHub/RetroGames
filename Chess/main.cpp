#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "Chess");
    sf::Texture boardTex;
    boardTex.loadFromFile("../Assets/Images/Chess/Board.png");
  
    sf::Sprite BgSprite;
    BgSprite.setTexture(boardTex);
   
    sf::Texture pieceTex;
    sf::Sprite B_pieces[6];
    for (int i = 0; i < 6; ++i)
    {
        pieceTex.loadFromFile("../Assets/Images/Chess/pieces.png", sf::IntRect(0, 0, 64 * (i + 1), 64 * (i + 1)));
        B_pieces[i].setTexture(pieceTex);
        B_pieces[i].setPosition(sf::Vector2f(64 * (i + 1), 64 * (i + 1)));
    }

   
   

  
   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(BgSprite);
        for (int i = 0; i < 6; i++)
        {
            window.draw(B_pieces[i]);
        }
       
        window.display();
    }

    return 0;
}