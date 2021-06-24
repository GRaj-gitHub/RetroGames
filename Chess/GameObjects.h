#pragma once
#include <SFML/Graphics.hpp>

//Default Parent GameObject
class GameObject
{
public:

	GameObject(float posX, float posY, const char* name);
	~GameObject() {};

	inline sf::Vector2f GetPosition() { return position; }
	
	void SetPosition(float x, float y) { position.x = x; position.y = y; }

	void SetTexture(const sf::Texture& tex) { pieceTex = tex; }

	virtual void MoveObject(float x,float y); //also add the type of movement;

protected:
	
	const char* objName;

	sf::Vector2f position;
	sf::Texture pieceTex;

};

class Pawn : public GameObject
{
public:
	Pawn() : GameObject(0, 0, "Pawn")
	{};
	~Pawn() {};


	sf::Sprite GetSprite() { return pawnSprite; }

	void MakeSprite() { pawnSprite.setTexture(pieceTex); }

	const char* GetName() { return objName; }


protected:

	sf::Sprite pawnSprite;
};