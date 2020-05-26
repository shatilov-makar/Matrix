#include "Matrix2D.h"
#include "Matrix3D.h"
#include <iostream>

void fillMatrix(MatrixBase& matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix.element(i, j) = matrix.size() * i + j + 1;
        }
    }
}

int main()
{
    Matrix2D m2a, m2b;
    fillMatrix(m2a);
    fillMatrix(m2b);
    std::cout << "m2a == m2b:" << std::endl;
    std::cout << m2a << std::endl;

    Matrix3D m3a, m3b;
    fillMatrix(m3a);
    fillMatrix(m3b);
    std::cout << "m3a == m3b:" << std::endl;
    std::cout << m3a << std::endl;

    m2a += m2b;
    m2b *= 3;

    m3a += m3b;
    m3b *= 3;
    std::cout << "m2a += m2b. m2a = " << std::endl;
    std::cout << m2a << std::endl;
    std::cout << "m2b *= 3. m2b = " << std::endl;
    std::cout << m2b << std::endl;
    std::cout << "m3a += m3b. m3a = " << std::endl;
    std::cout << m3a << std::endl;
    std::cout << "m3b *= 3. m3b = " << std::endl;
    std::cout << m3b << std::endl;
}
