#include <iostream>
#include <string>
//// david left a coment//
// this is chris I am also leaving a comment 
uint64_t fib(uint32_t n)
{
	if(n <= 0)
		return 0;
	else if(n == 1 || n == 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}

int main(int argc, char** args)
{
	std::string line;
	std::cout << "What is the Nth fibonacci number you wish to compute: ";
	std::getline(std::cin, line);
	std::cout << fib(std::stoi(line));
}

xczzxczxxcz
asdsadasdsa