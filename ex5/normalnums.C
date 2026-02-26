#include <iostream>
#include <random>

void normalnums()
{
    int repeat = 1000;
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(5.0,2.0); // Normal distribution with mean = 5 & std.dev = 2

    // Creating output root file
    TFile *output = new TFile("normalnums.root", "recreate");
    int num = 0;
    // Creating the TTree
    TTree *tree = new TTree("tree", "Normal_ints");
    // Defining "branches"
    tree->Branch("integer", &num, "num/I");
    for (int i=0; i<repeat; ++i)
    {
        num = distribution(generator);
        //std::cout << num << std::endl;

        // Filling the tree
        tree->Fill();
    }

    // Writing the tree & closing the output file
    tree->Write();
    output->Close();
    
}