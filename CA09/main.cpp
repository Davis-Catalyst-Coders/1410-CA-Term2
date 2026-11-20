#include <iostream>
#include "Coord.hpp"

int main() {
    Coord hero(2, 3);
    Coord treasure(4, 4);

    std::cout << "Hero starts at: ";
    std:: cout << hero << std::endl;
    std:: cout << treasure << std::endl;

    std::cout << "Hero walks north-east: ";
    // add hero + Coord(1, 1) and output here
    hero = hero + Coord(1, 1);
    std::cout << (hero + Coord(1, 1)) << std::endl;

    std::cout << "On the treasure? ";
    // add hero == treasure output here
    std::cout << (hero == treasure) << std::endl;

    std::cout << "Post-increment east: ";
    // add hero++ output here
    std::cout << hero++ << std::endl;

    std::cout << "Hero is now at: ";
    std::cout << hero << std::endl;

    std::cout << "Pre-increment east: ";
    // add ++hero output here
            std::cout << ++hero << std::endl;

    std::cout << "Enter a teleport target (x y): ";
    // add Coord portal, input, and output here
    Coord portal;
    std:: cin >> portal;
    std::cout << "teleported to: " << portal << std::endl;

    std::cout << "End of Program.";
    return 0;
}