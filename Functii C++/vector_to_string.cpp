#include <vector>
#include <string>
#include <iterator>
#include <sstream>

string vector_to_string(vector<int> vec)
{
		ostringstream oss;
		copy(vec.begin(), vec.end(), ostream_iterator<int>(oss));
		return oss.str();
}
