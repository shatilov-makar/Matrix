#pragma once
#include "MatrixBase.h"
class Matrix3D :public MatrixBase
{
public:
    Matrix3D() :MatrixBase(matrixSize)
    {
        for (int i = 0; i < matrixSize * matrixSize; i++)
            matrixElements[i] = i;
    };
private:
    const static unsigned int matrixSize = 3;
    int matrixElements[matrixSize * matrixSize];
    int element(unsigned int i, unsigned int j) const override;
    int& element(unsigned int i, unsigned int j) override;
};

