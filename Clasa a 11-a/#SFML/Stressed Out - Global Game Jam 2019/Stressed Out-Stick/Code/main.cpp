#include <SFML/Graphics.hpp>
#include "declarations.h"
#include <Windows.h>
#include "Bar.h"



int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show)
{
	sf::ContextSettings s;
	s.antialiasingLevel = 6;
	sf::RenderWindow window(sf::VideoMode(1366, 768), "SFML works!", sf::Style::Titlebar | sf::Style::Close | sf::Style::Default, s);

	sf::Texture barTexture;
	barTexture.loadFromFile("bar.png");

	sf::Texture stressTexture;
	stressTexture.loadFromFile("stress.png");
	
	float val = 50;

	sf::Vector2i position;
	
	Bar stressBar(&barTexture, &stressTexture, sf::Color::Red, position);
	stressBar.position = {850, 650};
	
	stressBar.value = &val;
	
	

	while (window.isOpen())
	{
		handleEvents(window);
		
		stressBar.draw(&window);
		

		window.display();
		window.clear({29,0,51,UCHAR_MAX});
	}

	return 0;
}