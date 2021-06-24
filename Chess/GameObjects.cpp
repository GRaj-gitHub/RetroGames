#include "GameObjects.h"

GameObject::GameObject(float posX , float posY, const char* name = "DefaultObject") : position(posX, posY)
{
	objName = name;
}

void GameObject::MoveObject(float x, float y)
{
}
