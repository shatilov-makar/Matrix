#include "Matrix2D.h"

Matrix2D::Matrix2D() : MatrixBase(matrixSize) {};


int Matrix2D::element(unsigned int i, unsigned int j) const
{
	return matrixElements[i][j];
}

int& Matrix2D::element(unsigned int i, unsigned int j)
{
	return matrixElements[i][j];
}

