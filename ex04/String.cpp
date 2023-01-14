
#include "String.hpp"

std::string String::replace(std::string const &haystack, std::string const &needle, std::string const &replacement)
{
    std::size_t needlePos;
    std::string haystackCopy = haystack;

    while ((needlePos = haystackCopy.find(needle)) != std::string::npos)
    {
        haystackCopy.erase(needlePos, needle.length());
        haystackCopy.insert(needlePos, replacement);
    }

    return haystackCopy;
}
