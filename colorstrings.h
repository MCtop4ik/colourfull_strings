#ifndef COLORSTRINGS_H
#define COLORSTRINGS_H
#include <iostream>
#include <string>


enum class Colors {
    EMPTY = 0,
    BLACK = 30,
    RED = 31,
    GREEN = 32,
    YELLOW = 33,
    DARK_BLUE = 34,
    PURPLE = 35,
    LIGHT_BLUE = 36,
    WHITE = 37,
};

class ColourfulString {
    std::string str;
    Colors color;

public:
    explicit ColourfulString(std::string str, Colors color);

    [[nodiscard]] std::string getString() const;
    void setString(const std::string &newStr);

    [[nodiscard]] Colors getColor() const;
    void setColor(Colors newColor);

    friend std::ostream& operator<<(std::ostream& os, const ColourfulString& cStr);
};
std::ostream& operator<<(std::ostream& os, Colors c);


#endif
