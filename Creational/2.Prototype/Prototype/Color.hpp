#pragma once

class Color
{
public:
    Color(unsigned r, unsigned g, unsigned b, unsigned a = 255);
    Color(Color& color) = default; // <- Prototype omg!

private:
    unsigned m_r;
    unsigned m_g;
    unsigned m_b;
    unsigned m_a;
};