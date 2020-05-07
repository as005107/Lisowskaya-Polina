#pragma once

#ifdef STRINGHANDLER_EXPORTS
#define STRINGHANDLER_API __declspec(dllexport)
#else
#define STRINGHANDLER_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

extern "C" STRINGHANDLER_API string delete_consonants(const string& test_str);