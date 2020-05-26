#include "Matrix3D.h"

Matrix3D::Matrix3D() : MatrixBase(matrixSize) {};

int Matrix3D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[i][j];
}

int& Matrix3D::element(unsigned int i, unsigned int j)
{
	return matrixElements[i][j];
}