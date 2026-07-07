#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

void readFile(const char *fileName, std::string s1, std::string s2)
{
	std::ifstream filein(fileName);
	if (!filein.is_open())
	{
		std::cout << "Error to open file." << std::endl;
		return ;
	}
	
	std::stringstream buffer;
	buffer << filein.rdbuf();
	std::string content = buffer.str();

	std::size_t pos = content.find(s1);
	if (pos != std::string::npos)
		std::cout << s1 << " found in pos: " << pos << std::endl;
	else
		std::cout << "Could not find " << s1 << std::endl;
	(void) s2;
	filein.close();
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Please provide all parameters: ./sed [path/fileName] [s1] [s2]" << std::endl;
		return (1);
	}
	readFile(argv[1], (std::string)argv[2], (std::string)argv[3]);
}