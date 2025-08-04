//
// Created by Senya on 8/4/2025.
//

#include "colorstrings.h"

#include <utility>

ColourfulString::ColourfulString(std::string str, Colors color = Colors::EMPTY) : str(std::move(str)), color(color){}

Colors ColourfulString::getColor() const {
    return this->color;
}

std::string ColourfulString::getString() const {
    return this->str;
}

void ColourfulString::setColor(const Colors newColor) {
    this->color = newColor;
}

void ColourfulString::setString(const std::string &newStr) {
    this->str = newStr;
}

std::ostream& operator<<(std::ostream& os, Colors c) {
    os << "\u001b[" << static_cast<int>(c) << "m";
    return os;
}

std::ostream& operator<<(std::ostream& os, const ColourfulString& cStr) {
    os << cStr.getColor() << cStr.getString() << Colors::EMPTY;
    return os;
}