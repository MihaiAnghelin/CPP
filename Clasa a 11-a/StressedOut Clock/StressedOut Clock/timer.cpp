//transforma din secunde(int) in minute + secunde(string)

#include<iostream>
#include<string>
#include<cstdlib>


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
	int minute = sec / 60;
	int restSec = sec % 60;
	std::string str = int_to_str(minute) + ":" + int_to_str(restSec);
	return str;
}


int main()
{

	std::cout << minute_sec(753) << "\n";
	system("pause");
	return 0;
}