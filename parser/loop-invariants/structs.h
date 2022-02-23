
#include <iostream>
#include <map>
#include <set>

struct StaticPtg2 {
    std::map <std::string, std::set<std::string>> varsMap;
    std::map <std::string, std::set<std::string>> fieldsMap;
};


struct Entry {
    int caller;
    int bci;
    bool isString = false;
    bool isConstant = false;
    bool isNull = false;
    bool isGlobal = false;
    bool isRef = false;
};

struct StaticPtg {
    //key - stack slot number (i.e. a unique identifier for the variable in a given method)
    //value - a set of Entrys
    std::map <int, std::vector<Entry>> varsMap;
    std::map <int, std::vector<Entry>> fieldsMap;
};

