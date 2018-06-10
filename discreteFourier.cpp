#include <cmath>
#include "discreteFourier.h"

using namespace std;

void discreteFourierTransform(vector<complex<double> > & sequence) {
    vector<complex<double> > transform(sequence.size());
    complex<double> x;
    for(int k = 0; k < sequence.size(); k++) {
        x = 0;
        for(int n = 0; n < sequence.size(); n++) {
            x += sequence[n] * complex<double>(cos( (2 * M_PI * k * n) / sequence.size()), - sin( (2 * M_PI * k * n) / sequence.size()));
        }
        x /= sequence.size();
        transform[k] = x;
    }
    for(int k = 0; k < sequence.size(); k++) {
        sequence[k] = transform[k];
    }
}

void inverseDiscreteFourierTransform(vector<complex<double> > & sequence) {
    vector<complex<double> > transform(sequence.size());
    complex<double> x;
    for(int n = 0; n < sequence.size(); n++) {
        x = 0;
        for(int k = 0; k < sequence.size(); k++) {
            x += sequence[k] * complex<double>(cos( (2 * M_PI * k * n) / sequence.size()), sin( (2 * M_PI * k * n) / sequence.size()));
        }
        transform[n] = x;
    }
    for(int k = 0; k < sequence.size(); k++) {
        sequence[k] = transform[k];
    }
}
