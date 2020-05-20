#include "Matrix3D.h"

int Matrix3D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[matrixSize * i + j];
}

int& Matrix3D::element(unsigned int i, unsigned int j)
{
	return matrixElements[matrixSize * i + j];
}
