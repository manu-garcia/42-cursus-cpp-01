
#include <fstream>

#include "File.hpp"
#include "String.hpp"

int File::replace(std::string const &filename, std::string const &needle, std::string const &replacement)
{
    if (!filename.length() || !needle.length() || !replacement.length())
    {
        return 0;
    }

    std::ifstream ifs;
    ifs.open(filename);
    if (!ifs.is_open())
    {
        return 0;
    }

    std::ofstream ofs;
    ofs.open(filename + ".replace", std::ofstream::trunc);
    if (!ofs.is_open())
    {
        ifs.close();
        return 0;
    }

    std::string haystack;
    while (std::getline(ifs, haystack))
    {
        ofs << String::replace(haystack, needle, replacement);
        ofs << std::endl;
    }

    ifs.close();
    ofs.close();

    return 1;
}
