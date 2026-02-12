#include <iostream>
#include <cmath>
#include "recon_track.h" // including the class header

double recon_track::transverse_p() // implementing the member functions
{
    return sqrt(pow(px,2)+pow(py,2));
}

double recon_track::pseudorap()
{
    double theta = transverse_p()/pz;
    return theta;
}
   