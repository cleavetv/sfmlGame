#include <SFML/Graphics.hpp>
#include "Game.h"

int WinMain()
{

	Game game;

	while (game.IsRunning()) {
		game.Update();
		game.Render();
	}

	game.Cleanup();

	return 0;

}