#include <iostream>
#include <cmath>

using namespace std;

class recon_track // Header
{
    private: // Components of the 4-vector
        double E;
        double px;
        double py;
        double pz;
    
    public: // Prototype accessor member functions
        double transverse_p();
        double pseudorap();

        recon_track(){} // default constructor, so the compiler won't complain when inheriting

        recon_track(double a, double b, double c, double d) // initializing variables
        {
            E=a;
            px=b;
            py=c;
            pz=d;
        }
};