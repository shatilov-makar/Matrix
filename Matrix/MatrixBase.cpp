#include "MatrixBase.h"
#include <iostream>

using namespace std;

unsigned int MatrixBase::size() const
{
	return m_size;
}

void MatrixBase::operator*=(int iMult)
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			element(i, j) *= iMult;

}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			element(i, j) += iAdd.element(i, j);
}

MatrixBase::MatrixBase(unsigned int iSize) : m_size(iSize) {};

ostream& operator << (ostream& stream, const MatrixBase& iMatrix)
{
	for (int i = 0; i < iMatrix.size(); i++)
	{
		for (int j = 0; j < iMatrix.size(); j++)
		{
			cout << iMatrix.element(i, j) << "  ";
		}
		cout << endl;
	}
	return stream;
}

