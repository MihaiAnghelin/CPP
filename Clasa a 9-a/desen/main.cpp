

// including necessary directories

#include <iostream>


// vectors make your life easier, but arrays will work too!

#include <vector>


// I wrote this one myself, sorry!

#include "../visualization/cairo/cairo_vis.h"


// Alright, let's get to drawing some shapes, woo!

int main()
{


    // Defining necessary variables

    int res = 100;

    double r = 1;

    double theta = 0;


    // We will be using a vector of size 100 for our shape

    std::vector<vec> shape(100);


    // Now for a loop to define the shape! (pre-increment for optimal performance)

    for (int i = 0; i < res; ++i){


        // theta will go from 0->2pi

        theta = 2 * M_PI * i / (res-1);


        // Now to define the actual shape!

        shape[i].y = r * cos(theta) + cos(2*theta);

        shape[i].x = pow(r * sin(theta), 3);

    }


    // This function comes from my drawing library, sorry!

    draw(shape);

}
