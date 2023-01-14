#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>

class String
{
public:
    static std::string replace(std::string const &haystack, std::string const &needle, std::string const &replacement);
};

#endif
