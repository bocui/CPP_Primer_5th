#include <string>
#include <vector>
#include <algorithm>
#include "ch10_09_header.h"

using namespace std;

void elimDups(vector<string> &words)
{
    printvec(words);

    sort(words.begin(), words.end());
    printvec(words);
    
    auto end_unique = unique(words.begin(), words.end());
    printvec(words);

    words.erase(end_unique, words.end());
    printvec(words);
}
