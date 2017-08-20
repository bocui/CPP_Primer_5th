#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

int main() 
{
    std::vector<int> v = {1, 2, 3, 4, 5, 33, 1};
    std::cout << std::count(v.cbegin(), v.cend(), 1) << std::endl;
   
    std::list<std::string> lis = {"aa", "bb", "cc"};
    std::cout << std::count(lis.cbegin(), lis.cend(), "bb") << std::endl;
    return 0;
}
