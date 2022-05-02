#ifndef STRUCTS_H
#define STRUCTS_H

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


enum EntryType {
    String,
    Constant,
    Null,
    Global,
    Reference
};


struct Entry {
    int caller = -1;
    int bci = -1;

    EntryType type;

    string getString() {
        string res;
        if(type == Reference) {
            res.append(to_string(caller)).append("-").append(to_string(bci));
        } else if (type == String) {
            res = "s";
        } else if (type == Constant) {
            res = "c";
        } else if (type == Global) {
            res = "BOT";
        } else {
            res = "NULL";
        }

        return res;
    }
};

#endif
