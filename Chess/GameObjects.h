#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	GameObject(float posX, float posY) : position(posX, posY)
	{
		movFor = false;
		movRight = false;
		movLeft = false;
		movBack = false;

	}
	~GameObject() {};

	inline sf::Vector2f GetPosition() { return position; }
	void setPosition(float x, float y) { position.x = x; position.y = y; }

protected:
	
	sf::Vector2f position;
	bool movFor;
	bool movRight;
	bool movLeft;
	bool movBack;



};