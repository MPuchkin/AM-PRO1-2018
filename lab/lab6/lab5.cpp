//
// ������������ ������ �5. ���������� �������
// lab5.cpp
//

#include <cmath>
#include "lab5.h"

// double sqr(double x)
// - �� ������ � main.cpp �.�. �� ��������� � lab.h
// ���������� �������� �����
inline double sqr(double x)
{
    return x*x;
}

/* ������������ (inline) ������� ������������� ������������,
* �� ������ � ������ ����� ������� ����������,
* � ������ ���������� ������� �������
*/

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(sqr(x2 - x1) + sqr(y2 - y1));  // ����� ������ ������ ������� sqr
                                               // ���������� ����������� ���������� � ������������ ��������
}