#include "MatrixBase.h"
#include <iostream>


unsigned int MatrixBase::size() const
{
	return m_size;
}

void MatrixBase::operator*=(int iMult)
{
	for (int i = 0; i < size(); i++)
		for (int j = 0; j < size(); j++)
			element(i, j) *= iMult;

}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (int i = 0; i < size(); i++)
		for (int j = 0; j < size(); j++)
			element(i, j) += iAdd.element(i, j);
}

MatrixBase::MatrixBase(unsigned int iSize) : m_size(iSize) {};

std::ostream& operator<<(std::ostream& stream, const MatrixBase& iMatrix)
{
	for (int i = 0; i < iMatrix.size(); i++)
	{
		for (int j = 0; j < iMatrix.size(); j++)
		{
			if (iMatrix.element(i, j) < 10)
				std::cout << iMatrix.element(i, j) << "  ";
			else 
				std::cout << iMatrix.element(i, j) << " ";
		}
		std::cout << std::endl;
	}
	return stream;
}

