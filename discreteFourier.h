#ifndef DISCRETE_FOURIER_H
#define DISCRETE_FOURIER_H

#include <vector>
#include <complex>


void discreteFourierTransform(std::vector<std::complex<double> > & sequence);


void inverseDiscreteFourierTransform(std::vector<std::complex<double> > & sequence);


#endif
