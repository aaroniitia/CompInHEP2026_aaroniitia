#include <iostream>

void histogram()
{
    TCanvas *C1 = new TCanvas(); // Creating canvas for the plot

    TFile *input = new TFile("normalnums.root", "read"); // Reading in the root file with the tree

    TTree *tree = (TTree*)input->Get("tree"); // reading in the tree itself

    int n;

    tree->SetBranchAddress("integer", &n);

    int entries = tree->GetEntries(); // # entries

    // Histogram

    TH1D *h = new TH1D("h", "Histogram", 10, 0, 10); // histogram with 10 bins from 0 to 10

    // Let's loop over the tree values and fill the histogram
    for(int i=0; i < entries; i++)
    {
        tree->GetEntry(i);
        h->Fill(n);
    }

    h->Draw();
    C1->SaveAs("histogram.png"); // Plotting the histogram

    // Let's now make the requested altercations.
    h->SetFillColor(kYellow); 
    h->GetXaxis()->SetTitle("Values");
    h->GetYaxis()->SetTitle("Counts");
    h->SetLineWidth(10);
    h->SetLineColor(kBlack);

    C1->SaveAs("mod_histogram.png");

    input->Close();
}