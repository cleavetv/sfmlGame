#pragma once

#include "Saveable.h"
#include <SFML/Graphics.hpp>

class Game :
	public Saveable
{
public:
	Game();
	~Game();

	int Save(void);
	bool Load(void);

	bool Update(void);
	void Render(void);

	void Cleanup(void);

	inline bool IsRunning(void) { return m_isRunning; }

private:
	sf::RenderWindow m_window;
	bool m_isRunning;

};

