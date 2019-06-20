#include <string>
#include <vector>

using namespace std;

vector<int> string_to_vector(string myString)
{
	string input = "1234";
	vector<int> vec;
    for (size_t i = 0; i < input.size(); ++i)
    {                                   // This converts the char into an int and pushes it into vec
    	vec.push_back(input[i] - '0');  // The digits will be in the same order as before
    }
	return vec;
}