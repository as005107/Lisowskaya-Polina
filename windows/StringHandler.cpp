#include "pch.h"
#include "StringHandler.h"
#include <string>
using namespace std;

string delete_consonants(const string& test_str) {
    string consonants = "BCDFGHJKLMNPQRSTVWXYZ", temp;
    for (int i = 0; i < test_str.size(); i++) {
        bool check = false;
        for (int j = 0; j < consonants.size(); j++) {
            if ((char)toupper(test_str[i]) == consonants[j]) {
                check = true;
                break;
            }
        }
        if (!check) temp += test_str[i];
    }
    return temp;
}