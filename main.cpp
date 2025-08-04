#include <iostream>
#include "colorstrings.h"

int main() {
    ColourfulString cs = ColourfulString("abba", Colors::RED);
    std::cout << cs;
    return 0;
}