#include <iostream>

#define PRINT_JORD

int main_02_10()
{
#ifdef PRINT_JORD
	std::cout << "hey\n";
#endif

	return 0;
}