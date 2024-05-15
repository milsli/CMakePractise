#include <QCoreApplication>
#include <iostream>
#include "sequence.h"
#include <complex>


using namespace std;
using namespace std::complex_literals;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sequence sec;

    for(int i = 3; i < 12; i+= 1)
    {
        cout << "\n" << i << "  wyraz ciągu: " << sec.getNthFibonacchi(i);
    }

    std::complex<double> cpl1 = 3.0 + 6i;
    std::complex<double> z4 = 1.0 + 2i, z5 = 1.0 - 2i;

    cout << "\n\n" << sec.getComplexProduct(cpl1, z4) << "\n";

    return a.exec();
}
