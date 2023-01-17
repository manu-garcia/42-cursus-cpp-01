#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>
    
class Harl ;

typedef void (Harl::*t_fn_show_level_msg)(void);

class Harl {

public:
    Harl();
    void complain(std::string level);

    std::string LVL_DEBUG;
    std::string LVL_ERROR;
    std::string LVL_INFO;
    std::string LVL_WARNING;

private:
    void debug(void);
    void error(void);
    void info(void);
    void warning(void);

    std::map<std::string, t_fn_show_level_msg> fn_show_level_msg;
};


#endif