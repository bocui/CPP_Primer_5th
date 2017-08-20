#ifndef CH07_27_HEADER
#define CH07_27_HEADER
#include <iostream>
#include <string>
class Screen {
public:
    typedef std::string::size_type pos;

    Screen set(char);
    Screen set(pos, pos, char);
    Screen move(pos, pos);

    Screen display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }

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
    // when the nonconst version of display calls do_display, its this pointer is implicitly
    // converted from a pointer to nonconst --> a pointer to const.
    void do_display(std::ostream &os) const
    {
        os << contents;
    }

};

inline Screen Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline Screen Screen::set(pos r, pos col, char c)
{
    contents[r * width + col] = c;
    return *this;
}
inline Screen Screen::move(pos r, pos col)
{
    cursor = r * width + col;
    return *this;
}

#endif // CH07_27_HEADER

