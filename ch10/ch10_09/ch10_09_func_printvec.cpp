#include <iostream>
#include <vector>
#include <string>

void printvec(const std::vector<std::string> &words) 
{
    for (auto i = words.begin(); i != words.end(); ++i)
	std::cout << *i << " ; ";
    std::cout << std::endl;
}
