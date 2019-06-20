#include "stdafx.h"
#include <string>
#include <iostream>

std::string to_camel_case(std::string text) {
	std::string nou = "";
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '-' || text[i] == '_')
		{
			i++;
			nou += toupper(text[i]);
		}
		else
			nou += text[i];
	}
	return nou;
}

int main()
{
	std::cout << to_camel_case("The_Stealth_Warrior");
	std::cout << to_camel_case("the-stealth-warrior");
}