#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
	VideoMode vm(1920, 1080);
	Window window(vm, "Timber", Style::Fullscreen);
	return 0;
}