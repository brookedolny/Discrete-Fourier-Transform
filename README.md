# Discrete Fourier Transform
This project is an implementation of the Discrete Fourier Transform.

## Description
The Discrete Fourier Transform (DFT) converts a sequence of equally-spaced, finite samples of a function, 
and outputs the frequency domain representation of the original sequence.

## Example

Consider the function:
```
f(x) = 3sin(6πx) + 2cos(4πx) + 5sin(πx)
```

The graph of this function looks like this:

![Graph](/images/graph.png?raw=true "Function")

Taking samples from this function from `0 ≤ x ≤ 20` every `0.05` increment gives:

![Graph](/images/input.png?raw=true "Input Sequence")

The output of the DFT generates the following graph:

![Graph](/images/output.png?raw=true "Output Frequencies")

The real part of the complex output is shown in blue, and the imaginary part is in orange. Recall that complex numbers
can be represented in the following form:
```
z = r(cos(x) + i sin(x))
```
The imaginary part of the number represents the appropriate sine functions that make up the original frequency, 
and the real part represents the appropriate cosine functions.

Also, note that the output image has a certain symmetry to it. The imaginary part has rotational symmetry, and the real
part is symmetric about the line `x = 10`. Summing the magnitudes of the symmetric components produces the 
scalars multiplied by each function, and the `x` values give the frequency.
