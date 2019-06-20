#include "Bar.h"

Bar::Bar(sf::Texture * bar, sf::Texture * item, sf::Color c, sf::Vector2i position)
	:position(position)
{
	barSprite.setTexture(*bar);
	itemSprite.setTexture(*item);
	rectFront.setSize({ (float)item->getSize().x-40, (float)item->getSize().y });
	rectFront.setFillColor(c);
	rectBack.setSize({ (float)item->getSize().x + 340, (float)item->getSize().y });
	rectBack.setFillColor({ 128,128,128 });
}

void Bar::draw(sf::RenderWindow * window)
{
	float newValue = *value / 100.f;
	newValue *= barSprite.getTexture()->getSize().x;
	rectFront.setSize({ newValue, (float)barSprite.getTexture()->getSize().y });

	rectBack.setPosition({ position.x + itemSprite.getTexture()->getSize().x + 20.f, (float)position.y });
	rectFront.setPosition({ position.x + itemSprite.getTexture()->getSize().x + 20.f, (float)position.y });
	barSprite.setPosition({ (float)position.x + itemSprite.getTexture()->getSize().x + 20.f, (float)position.y });
	itemSprite.setPosition({ (float)position.x, (float)position.y });
	
	
	
	window->draw(itemSprite);
	window->draw(rectBack);
	window->draw(rectFront);
	window->draw(barSprite);
	
	
	
}
