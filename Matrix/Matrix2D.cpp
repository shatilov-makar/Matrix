#include "Matrix2D.h"

int Matrix2D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[matrixSize * i + j];
}

int& Matrix2D::element(unsigned int i, unsigned int j)
{
	return matrixElements[matrixSize * i + j];
}
