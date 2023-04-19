#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // solving cos(x) = e^(-x)
    // x = arccos(e^(-x))
    float x1 = 0.0f;
    float x2 = 0.5f;
    int iteration = 0;

    cout << "\n\tX-----------------------------------------------X\n"; // decoration :3
    while (x1 != x2) {
        x1 = x2;
        x2 = acos(exp(-x1));
        cout << "\t| x" << iteration << ": " << x1 << " \t| x" << iteration + 1 << ": " << x2 << " \t| iteration: " << iteration + 1<< "\t|\n";
        iteration++;
    }
    cout << "\tX-----------------------------------------------X\n\n"; // decoration :3
    cout << "Note: it appears that x12 through x15 are the same value but I'm pretty sure this is because of some weird floating point number thing.\n\n";
}