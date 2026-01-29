#include <iostream>
using namespace std;

int main() {
    int n = 0;
    string hw = "Hello world <";   
    cout << "Input number: ";
    cin >> n;
    string out = hw + to_string(n) + ">";
    cout << out;
    return 0;
}