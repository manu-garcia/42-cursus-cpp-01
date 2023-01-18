#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>

class Harl {

public:
    std::string LVL_DEBUG;
    std::string LVL_ERROR;
    std::string LVL_INFO;
    std::string LVL_WARNING;
    
    Harl();
    void complain(std::string level);

private:
    
    std::map<std::string, int> levelIndexes;

    void debug(void);
    void error(void);
    void info(void);
    void warning(void);
};


#endif