#include <SFML\Graphics.hpp>


void handleEvents(sf::RenderWindow &window)
{
sf::Event event;
while (window.pollEvent(event))
{
	if (event.type == sf::Event::Closed)
		window.close();
}
}

