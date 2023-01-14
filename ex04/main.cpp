
#include <iostream>

#include "File.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./file_replace filename to_be_replaced_str replacement_str" << std::endl;
        return -1;
    }

    std::string filename = argv[1];
    std::string needle = argv[2];
    std::string replacement = argv[3];

    if (!File::replace(filename, needle, replacement))
    {
        std::cerr << "error replacing text in file." << std::endl;
        return -1;
    }

    std::cout << "Text successfully replaced in file." << std::endl;

    return (0);
}
