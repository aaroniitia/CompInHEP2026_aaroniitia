#include "recon_track.h" // including the class to be inherited
using namespace std;

class particles : public recon_track // inherits the recon_track class
{
    private:
        string parent_id;
        string particle_id;

        particles(string parent, string particle) // constructor to initialize variables
        {
            parent_id = parent;
            particle_id = particle;
        }
};