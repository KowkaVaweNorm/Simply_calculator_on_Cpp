#include <iostream>
 // Its simple calculator

int readNumber()		// reads the number that the user enters
{
	int x;
	std::cin >> x;
	
	return x;
}

int add(int x, int y)	      // return x + y
{
	return x + y;
}

int multiply(int x, int y)     // return x * y
{
	return x * y;
}

int subtraction(int x, int y)  // return x - y 
{
	return x - y;
}

int division(int x, int y)     // return x / y
{
	return x / y;
}


int main()
{
	int x, y;
	
	std::cout << "Please enter the first number: "<< std::endl;
	x = readNumber();

	std::cout << "Please enter the second number: " << std::endl;
	y = readNumber();

	int operation;   // operation that the user selects, this is operation number

	std::cout << "Please choose your operation: \n" <<
		"1 : '+' \n" <<
		"2 : '-' \n" <<
		"3 : '*' \n" <<
		"4 : '/' \n" << std::endl;
	
	operation = readNumber();

	if (operation == 1) {
		int out = add(x, y);
		std::cout << "Answer is : " << out << std::endl;
	}
		if (operation == 2) {
		int out = subtraction(x, y);
		std::cout << "Answer is : " << out << std::endl;
	}
		if (operation == 3) {
		int out = multiply(x, y);
		std::cout << "Answer is : " << out << std::endl;
	}
		if (operation == 4) {
		int out = division(x, y);
		std::cout << "Answer is : " << out << std::endl;
	}
		

}