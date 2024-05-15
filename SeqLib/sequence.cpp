#include "sequence.h"
#include <iostream>

using namespace std;

Sequence::Sequence() {}

uint32_t Sequence::getNthFibonacchi(uint8_t n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }

    // uint32_t n1 = 1;
    // uint32_t n2 = 1;
    // uint32_t sum = n1 + n2;

    // if(n == 3)
    //     return sum;

    // for(int j = 3; j < n ; ++j)
    // {
    //     n1 = n2;
    //     n2 = sum;
    //     sum = n1 + n2;
    // }

    // return sum;

    uint32_t sum1 = getNthFibonacchi(n - 1);
    uint32_t sum2 = getNthFibonacchi(n - 2);

    return sum1 + sum2;
}

std::complex<double> Sequence::getComplexProduct(const std::complex<double> &v1, const std::complex<double> &v2)
{
    return v1 * v2;
}
