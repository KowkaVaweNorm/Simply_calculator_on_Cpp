
#include <iostream>


int readNumber()
{
	int x;
	std::cin >> x;
	
	return x;
}

int add(int x, int y)
{
	return x + y;
}

int multiply(int x, int y)
{
	return x * y;
}

int subtraction(int x, int y) {
	return x - y;
}


int main()
{
	int x, y;
	
	std::cout << "Please enter the first number: "<< std::endl;
	x = readNumber();

	std::cout << "Please enter the second number: " << std::endl;
	y = readNumber();

	int operation;

	std::cout << "Please choose your operation: \n" <<
		"1 : '+' \n" <<
		"2 : '-' \n" <<
		"3 : '*' \n" <<
		"4 : '/' \n" << std::endl;
	
	operation = readNumber();


}