#include <iostream>

enum _operation
{
	ADD,
	SUB,
	MULT,
	DIV,
};

int main()
{
	int x, y;
	std::string op;
	std::cout << "Welcome to Sean CLI Calculator\nEnter Your Operator? ";
	std::cin >> op;
	std::cout << "enter first number? ";
	std::cin >> x;
	std::cout << "enter second number? ";
	std::cin >> y;
	_operation oper;
	if (op == "+")
	{
		oper = ADD;
	}
	else if (op == "-")
	{
		oper = SUB;
	}
	else if (op == "/")
	{
		oper = DIV;
	}
	else if (op == "*")
	{
		oper = MULT;
	}
	else
	{
		throw std::invalid_argument("received negative value");
	}
	switch (oper)
	{
	case ADD:
		printf("%d\n", x + y);
		break;
	case SUB:
		printf("%d\n", x - y);
		break;
	case MULT:
		printf("%d\n", x * y);
		break;
	case DIV:
		printf("%d\n", x / y);
		break;
	default:
		throw std::invalid_argument("received negative value");
	}

	return 0;
}