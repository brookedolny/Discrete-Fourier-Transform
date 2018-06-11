#ifndef DISCRETE_FOURIER_H
#define DISCRETE_FOURIER_H

#include <vector>
#include <complex>

/**
 * Performs the Discrete Fourier Transform on a sequence of N complex numbers.
 *
 * @param sequence the N complex numbers to be transformed.
 */
void discreteFourierTransform(std::vector< std::complex<double> > & sequence);

/**
 * Performs the inverse transformation of the Discrete Fourier Transform
 * on a sequence of N complex numbers.
 *
 * @param sequence the N complex numbers to be transformed.
 */
void inverseDiscreteFourierTransform(std::vector< std::complex<double> > & sequence);


#endif
