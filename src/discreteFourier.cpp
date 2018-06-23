#include <cmath>
#include "discreteFourier.h"

using namespace std;

using Complex = complex<double>;
using Sequence = vector<Complex>;

void discreteFourierTransform(Sequence & sequence) {
    Sequence transform(sequence.size());
    Complex x;
    for(int k = 0; k < sequence.size(); k++) {
        x = 0;
        for(int n = 0; n < sequence.size(); n++) {
            x += sequence[n] * Complex(cos( (2 * M_PI * k * n) / sequence.size()), - sin( (2 * M_PI * k * n) / sequence.size()));
        }
        x /= sequence.size();
        transform[k] = x;
    }
    for(int k = 0; k < sequence.size(); k++) {
        sequence[k] = transform[k];
    }
}

void inverseDiscreteFourierTransform(vector< complex<double> > & sequence) {
    Sequence transform(sequence.size());
    Complex x;
    for(int n = 0; n < sequence.size(); n++) {
        x = 0;
        for(int k = 0; k < sequence.size(); k++) {
            x += sequence[k] * Complex(cos( (2 * M_PI * k * n) / sequence.size()), sin( (2 * M_PI * k * n) / sequence.size()));
        }
        transform[n] = x;
    }
    for(int k = 0; k < sequence.size(); k++) {
        sequence[k] = transform[k];
    }
}
