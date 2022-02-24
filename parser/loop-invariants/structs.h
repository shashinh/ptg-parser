
#include <iostream>
#include <map>
#include <set>

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
    //value - a list of Entrys (this should ideally be a set, but requires a comparator - TODO later)
    std::map <int, std::vector<Entry> > varsMap;

    //key - a bci uniquely identifying an object
    //key - a map of field names to Entrys
    std::map <int, std::map <std::string, std::vector <Entry>>> fieldsMap;
};

