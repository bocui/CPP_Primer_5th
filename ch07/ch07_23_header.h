#ifndef CH07_23_HEADER
#define CH07_23_HEADER
#include <string>
class Screen {
public:
    typedef std::string::size_type pos;
    // the default constructor
    Screen() = default;
    
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
    //member, and implicitly inline
    char get() const{
        return contents[cursor];
    }
    char get(pos r, pos col) const {return contents[r * width + col];}
    
    
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

}
#endif // CH07_23_HEADER

