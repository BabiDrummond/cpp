#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

bool dumpFile(const std::string& fileName, std::string& content)
{
	std::ifstream filein(fileName.c_str());
	if (!filein.is_open())
		return (false);

	std::stringstream buffer;
	buffer << filein.rdbuf();
	content = buffer.str();
	filein.close();

	return (true);
}

void replaceStr(std::string fileName, std::string content, std::string s1, std::string s2)
{
	const std::string outputFile = fileName.append(".replace");
	std::ofstream fileout(outputFile.c_str());

	std::size_t start = 0;
	std::size_t end;

	while ((end = content.find(s1, start)) != std::string::npos) {
		fileout.write(content.c_str() + start, end - start);
		fileout << s2;
		start = end + s1.length();
	}
	end = content.length();
	fileout.write(content.c_str() + start, end - start);
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
