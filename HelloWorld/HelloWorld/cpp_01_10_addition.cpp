#include <iostream>
#include <format>

static int addition()
{
	int firstNumber;
	int secondNumber;

	std::cout << "Enter the first number: \n";
	std::cin >> firstNumber;

	std::cout << "Enter the second number: \n";
	std::cin >> secondNumber;

	return firstNumber + secondNumber;
}

int main_01_10()
{
	std::cout << "Heyo!! It's Jordy\n";
	int additionResult = addition();

	std::cout << std::format("Those numbers added together equals: {}\n", additionResult);

	return 0;
}