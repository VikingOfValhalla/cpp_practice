#include <iostream>
#include <map>
#include <string>

int main ()
{
	std::map<std::string, int> simple_dict = {
		{"index", 1},
		{"index", 2},
		{"index", 3}
	};

	for (const auto& element : simple_dict)
	{
		std::cout << element.first << " " << element.second << std::endl;
	}
	return 0;
}