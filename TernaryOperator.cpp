#include <iostream>

int main()
{
	double BiggestNumber, Number01, Number02;

	std::cout << "Type the first number: ";
	std::cin >> Number01;
	std::cout << "Type the second number: ";
	std::cin >> Number02;

	BiggestNumber = (Number01 > Number02) ? Number01 : Number02; // This ternary operator sets the biggest number among two. 
	std::cout << "Biggest typed number: " << BiggestNumber << "\n";

	// This ternary operator will display different messages depending on which is the biggest.
	(Number01 > Number02) ? std::cout << "Number01 is bigger than Number02\n" : std::cout << "Number02 is bigger than Number01\n";
	
	system("PAUSE");
}