#pragma once

class Wektor2D
{
    double x;
    double y;

public:
    Wektor2D() : x(0), y(0) {}
    Wektor2D(double xVal, double yVal) : x(xVal), y(yVal) {}

    void setX(double newX) { x = newX; }
    void setY(double newY) { y = newY; }

    double getX() const { return x; }
    double getY() const { return y; }

    Wektor2D operator+(const Wektor2D& other) const
    {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) const
    {
        return x * other.x + y * other.y;
    }
};
