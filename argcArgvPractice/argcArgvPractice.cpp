#include <iostream>
#include <string>

int main (int argc, char* argv[])
{

	for (int x=0; x<argc; x++)
	{

		std::string flag = "-e";

		if(argv[x]==flag)
		{
			printf("You input: %s \n", argv[x]);
		}

	};
	return 0;
}