#include <iostream>
#include <cmath> // for math functions

using namespace std;

class MET
{
    private:
        double x; // MET x-component
        double y; // MET y-component

        MET(double E_x, double E_y) // Constructor which initializes member variables E_x & E_y from the outside
        {
            x = E_x;
            y = E_y;
        }

    public:
        double value() // returns MET value
        {
            return x + y;
        }

        double x_comp() // returns x-component of MET
        {
            return x;
        }

        double y_comp() // returns y-component of MET
        {
            return y;
        }

        double phi() // calculates and returns angle between MET & x-axis
        {
            return atan(y/x);
        }

};