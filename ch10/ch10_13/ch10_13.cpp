#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLonger5(const string &s)
{
    return s.size() >= 5;
}

int main() 
{
    vector<string> v = {"hehee", "new", "not", "looongg"};
    auto pt = partition(v.begin(), v.end(), isLonger5);
    for (auto i = v.begin(); i != pt; ++i) 
	cout << *i << endl;
}
