#include <SFML/Graphics.hpp>
#include "declarations.h"
#include <Windows.h>
#include "Bar.h"
#include <string>


std::string int_to_str(int integer)
{
	std::string str = "";
	while (integer)
	{
		str += integer % 10 + '0';
		integer /= 10;
	}
	std::reverse(str.begin(), str.end());
	return str;
}

std::string minute_sec(int sec)
{
	std::string str;
	if (sec == 0)
	{
		str = "00:00";
	}
	else 
	{
		int minute = sec / 60;
		int restSec = sec % 60;
		std::string strMin, strSec;
		strMin = int_to_str(minute);
		strSec = int_to_str(restSec);
		if (minute < 10)
		{
			strMin = "0" + int_to_str(minute);
		}
		if (restSec < 10)
		{
			strSec = "0" + int_to_str(restSec);
		}

		if (minute == 0)
		{
			str = "00:" + strSec;
		}
		else if (restSec == 0)
		{
			str = strMin + ":00";
		}
		else
		{
			str = strMin + ":" + strSec;
		}
	}
	return str;
}

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
	
	
	sf::Font font;
	font.loadFromFile("font.ttf");
	sf::Text text;
	text.setFont(font);
	text.setString(minute_sec(600));// nr secunde
	text.setCharacterSize(80);
	text.setFillColor(sf::Color::White);
	text.setPosition(400.f, 400.f);
	while (window.isOpen())
	{
		handleEvents(window);
		
		stressBar.draw(&window);
		
		window.draw(text);
		window.display();
		window.clear({29,0,51,UCHAR_MAX});
	}

	return 0;
}