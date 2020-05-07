#include "StringHandler.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << delete_consonants(str);
    return 0;
}