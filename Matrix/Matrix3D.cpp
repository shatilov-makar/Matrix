#include "Matrix3D.h"

Matrix3D::Matrix3D() : MatrixBase(matrixSize)
{
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            element(i, j) = 0;
        }
    }
};

int Matrix3D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[size() * i + j];
}

int& Matrix3D::element(unsigned int i, unsigned int j)
{
	return matrixElements[size() * i + j];
}
