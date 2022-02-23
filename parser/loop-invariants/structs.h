
#include <iostream>
#include <map>
#include <set>

struct StaticPtg {
    std::map <std::string, std::set<std::string>> varsMap;
    std::map <std::string, std::set<std::string>> fieldsMap;
};


struct Entry {
    int bci;
    bool isString;
    bool isConstant;
    bool isNull;
    bool isGlobal;
};

struct StaticPtg2 {
    std::map <std::string, std::set<Entry>> varsMap;
    std::map <std::string, std::set<Entry>> fieldsMap;
};

