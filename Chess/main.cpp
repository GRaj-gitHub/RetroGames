#include "GameObjects.h"

int main()
{
   sf::RenderWindow window(sf::VideoMode(512, 512), "Chess");
   
   sf::Texture boardTex;
    boardTex.loadFromFile("../Assets/Images/Chess/Board.png");
  
    sf::Sprite BgSprite;
    BgSprite.setTexture(boardTex);
   
    sf::Texture pieceTex;
    sf::Sprite B_pieces[6];
   // for (int i = 0; i < 6; i++)
  //  {
        pieceTex.loadFromFile("../Assets/Images/Chess/pieces.png", sf::IntRect( 64 * 0 , 64 * 0, 64, 64));
       
        B_pieces[0].setTexture(pieceTex);
        pieceTex.loadFromFile("../Assets/Images/Chess/pieces.png", sf::IntRect(64 * 0, 64 * 0, 64, 64));
        B_pieces[1].setTexture(pieceTex);
        B_pieces[1].setPosition(sf::Vector2f(64 , 0));
    //}
  

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(BgSprite);
       for (int i = 0; i < 2; i++)
       {
            window.draw(B_pieces[i]);
       }
        //window.draw(B_pieces[1]);
        window.display();
    }

    return 0;
}