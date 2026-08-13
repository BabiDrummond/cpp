#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

bool dumpFile(const std::string& fileName, std::string& fileContent)
{
	std::ifstream filein(fileName.c_str());
	if (!filein.is_open())
		return (false);

	std::stringstream buffer;
	buffer << filein.rdbuf();
	fileContent = buffer.str();
	filein.close();

	return (true);
}

void replaceStr(std::string fileName, std::string fileContent, std::string s1, std::string s2)
{
	const std::string outputFile = fileName.append(".replace");
	std::ofstream fileout(outputFile.c_str());

	std::size_t pos = 0;

	while ((pos = fileContent.find(s1, pos)) != std::string::npos) {
		fileContent.erase(pos, s1.length());
		fileContent.insert(pos, s2);
		pos += s2.length();
	}
	fileout << fileContent;
	fileout.close();
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Please provide all parameters: ./sed [path/fileName] [s1] [s2]" << std::endl;
		return (1);
	}

	std::string fileContent;
	if (!dumpFile(argv[1], fileContent)){
		std::cout << "Error to open file." << std::endl;
		return (1);
	}
	replaceStr(argv[1], fileContent, argv[2], argv[3]);

	return (0);
}
