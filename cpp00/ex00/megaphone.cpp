#include <iostream>
#include <string>
#include <cctype>

void    megaphone(std::string word) {
    for (size_t j = 0; j < word.length(); j++)
        word[j] = std::toupper(word[j]);
    std::cout << word << " ";
}

int main(int argc, char **argv) {
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (int i = 1; i < argc; i++)
            megaphone(argv[i]);
    std::cout << std::endl;
    return (0);
}
