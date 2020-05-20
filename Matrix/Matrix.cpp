#include "Matrix2D.h"
#include "Matrix3D.h"

using namespace std;
#include <iostream>

int main()
{
    Matrix2D m2a, m2b;
    cout << "m2a = m2b =" << endl << m2a << endl;
    Matrix3D m3a, m3b;
    cout << "m3a = m3b =" << endl << m3a << endl;
    m2a += m2b;
    m2b *= 3;

    m3a += m3b;
    m3b *= 3;

    cout <<"m2a += m2b:"<<endl<< m2a << endl;
    cout << "m2b *= 3:" << endl << m2b << endl;

    cout << "m3a += m3b:" << endl << m3a << endl;
    cout <<"m3b *= 3:" << endl<< m3b << endl;
}


