#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <limits>

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace std;

int main ()
{
 int height  = 255*4;
 int width = 255*4;
 int area = width * height;

 ofstream img ("out.ppm");
 img << "P3" << endl;
 img << width << " " << height << endl;
 img << "255" << endl;

 for (int y = 0; y < height; y++) {
  for (int x = 0; x < width; x++) {

   int r = x % 255;
   int g = y % 255;
   int b = x * y % 255;


   img << r << " " << g << " " << b << endl;
  }
 }

 return 0;
}