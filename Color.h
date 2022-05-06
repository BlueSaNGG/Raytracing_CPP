#ifndef _COLOR_H
#define _COLOR_H

#include "math.h"

class Color {
    double red, green, blue, special;

    public:
    Color ();
    Color (double, double, double, double);

    // method
    double getColorRed() { return red; }
    double getColorGreen() { return green; }
    double getColorBlue() { return blue; }
    double getColorSpecial() { return special; }
    
    void setColorRed(double redValue) { red = redValue;}
    void setColorGreen(double greenValue) { green = greenValue;}
    void setColorBlue(double blueValue) { blue = blueValue;}
    void setColorSpecial(double specialValue) { special = specialValue;}


};

Color::Color () {
    red = 0.5;   
    green = 0.5;
    blue = 0.5;
    special = 0;
}

Color::Color (double r, double g, double b, double s) {
    red = r;   
    green = g;
    blue = b;
    special = s;
}

#endif