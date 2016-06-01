#include "Game.h"



Game::Game()
{
	m_window.create(sf::VideoMode(200, 200), "SFML Works!");
	m_isRunning = true;
}

Game::~Game()
{
}

int Game::Save(void)
{
	return 0;
}

bool Game::Load(void)
{
	return true;
}

bool Game::Update(void)
{
	if (m_window.isOpen())
	{
		sf::Event event;
		while (m_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_isRunning = false;
		}
	}

	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		m_isRunning = false;
	}

	return m_isRunning;
}

void Game::Render(void)
{
	sf::CircleShape shape(100.0f);
	shape.setFillColor(sf::Color::Green);

	m_window.clear();
	m_window.draw(shape);
	m_window.display();
}

void Game::Cleanup(void)
{
	m_window.close();
}