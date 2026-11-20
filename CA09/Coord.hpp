#pragma once
#include <iostream>

class Coord {
    private:
        int x;
        int y;

    public:
        Coord(int x = 0, int y = 0) : x(x), y(y) {}
        friend std::ostream& operator<<(std::ostream& out, const Coord& coord); // friend can access private
        friend std::istream& operator>>(std::istream& in, Coord& coord);
        Coord operator+(const Coord& step) const {
            return Coord(x + step.x, y + step.y);
        }
        bool operator==(const Coord& other) const {
            return x == other.x && y == other.y;
        }
        // pre (+++hero), post (hero++)
        // pre: changes then returns changes
        // post: save a copy changes copy hand back old copy
        // PRE
        Coord& operator++() {
            x++;
            return *this; // will be explained later but for now just use this
        }
        // POST
        Coord operator++(int) {
            Coord before = *this;
            ++(*this);
            return before;
        }
};
// cout is output string "hello"
 std::ostream& operator<<(std::ostream& out, const Coord& coord) {
    out << "(" << coord.x << "," << coord.y << ")";
    return out;
 }

 std::istream& operator>>(std::istream& in, Coord& coord) {
    in >> coord.x >> coord.y;
    return in; 
 }