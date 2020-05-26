#pragma once
#include "MatrixBase.h"
class Matrix2D : public MatrixBase
{
public:
    Matrix2D();
    int element(unsigned int i, unsigned int j) const override;
    int& element(unsigned int i, unsigned int j) override;
private:
    const static unsigned int matrixSize = 2;
    int matrixElements[matrixSize][matrixSize]{};
};