#pragma once
#include "MatrixBase.h"
class Matrix3D : public MatrixBase
{
public:
    Matrix3D();
    int element(unsigned int i, unsigned int j) const override;
    int& element(unsigned int i, unsigned int j) override;
private:
    const static unsigned int matrixSize = 3;
    int matrixElements[matrixSize][matrixSize]{};
};

