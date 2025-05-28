#include <iostream>

#define PRINT_JORD

int main()
{
#ifdef PRINT_JORD
	std::cout << "hey\n";
#endif

	return 0;
}