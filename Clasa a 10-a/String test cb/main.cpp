#include <string>
#include <iostream>

using namespace std;

string to_camel_case(string text) {
	string nou="                                    "; int j = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '-' || text[i] == '_')
		{
			i++;
			nou[j] = toupper(text[i]);

		}
		else
			nou[j] = text[i];
		j++;
	}
	return nou;
}

int main()
{
	cout << to_camel_case("the-stealth-warrior");
}
