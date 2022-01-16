#include <iostream>
#include <string.h>


int main(int argc, char **argv)
{
	int i = 1;
	int count = 0;
	char c;
	
	if (argc == 1) 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[i])
	{
		count = 0;
		while (argv[i][count])
		{
			if (argv[i][count] >= 'a' && argv[i][count] <= 'z')
			{
				c = argv[i][count] - 32;
				std::cout << c;
			}
			else
				std::cout << argv[i][count];
			count++;
		}
		i++;
	}
	std::cout <<  std::endl;
	return 0;
}