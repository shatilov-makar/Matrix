#include "Matrix3D.h"

Matrix3D::Matrix3D() : MatrixBase(matrixSize) {};

int Matrix3D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[size() * i + j];
}

int& Matrix3D::element(unsigned int i, unsigned int j)
{
	return matrixElements[size() * i + j];
}
