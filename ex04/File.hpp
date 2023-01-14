#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>

class File
{
public:
    static int replace(std::string const &filename, std::string const &needle, std::string const &replacement);
};

#endif
