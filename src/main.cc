#include <iostream>

int main()
{
	float x, y;
	char op; // Unless more omplex math is needed, we can use a single character for the operator
	std::cout << "Welcome to Sean CLI Calculator\nEnter first number: ";
	std::cin >> x;
	fflush(stdin); 
	std::cout << "Enter Your Operator: ";
	std::cin >> op;
	fflush(stdin); // Clear stdin buffer to prevent excess characters from going into the next input
	std::cout << "Enter second number: ";
	std::cin >> y;
	fflush(stdin);

	switch (op)
	{
	case '+':
		printf("%g\n", x + y);
		break;
	case '-':
		printf("%g\n", x - y);
		break;
	case '*': 
		printf("%g\n", x * y);
		break;
	case '/': 
		printf("%g\n", x / y);
		break;
	default:
		throw std::invalid_argument("Invalid Operator");
	}

	return 0;
}