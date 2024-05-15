#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <cstdint>
#include <complex>


class Sequence
{
public:
    Sequence();

    uint32_t getNthFibonacchi(uint8_t n);
    std::complex<double> getComplexProduct(const std::complex<double>& v1, const std::complex<double>& v2);

};

#endif // SEQUENCE_H
