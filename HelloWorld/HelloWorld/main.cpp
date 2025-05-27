#include <iostream>
#include <string>
#include <format>

int main()
{
	int x;
	int y;

	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the second number: ";
	std::cin >> y;

	int z = x + y;
	std::string sentence = std::format("{} + {} = {}", x, y, z);

	std::cout << sentence << '\n';
	return 0;
}