#include <string>

static string b10_to_b16(int num)
	{
		string d = "0123456789ABCDEF", res;
		while (num > 0) {
			res += d[num % 16];
			num /= 16;
		}
		reverse(res.begin(), res.end());
		return res;
	
	}