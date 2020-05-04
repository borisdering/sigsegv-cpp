#include <iostream>
#include <string>

void start() 
{
	std::cout << "starting crash..." << std::endl;
}

void crash() 
{
	char* ptr = NULL;
	*ptr = 'A';
}

void end() 
{
	std::cout << "You should be not able to run this program to this point." << std::endl;
}

int main() 
{
	std::cout << "Lets get an SIGSEGV!" << std::endl;
	start();
	crash();
	end();
	return 0;
}
