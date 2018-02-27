#pragma once

typedef double(*simple_func)(double);
typedef unsigned int uint;

// ����� ��������� ������� x � ����������� ����������� ����� ������� (x, y = f(x)).
// ���������:
//      f - ��������� �� ������� �������,
//      x - ��������� �� ������ �������� ������� �����,
//      size - ���������� ����,
//      index1, index2 - �������� ���������.
// ������������ ��������:
//      ����������� ���������� ����� �������,
//      index1, index2 - ������� ����� � ����������� �����������.
double min_distance(const simple_func f, const double *x, const uint size, int &min_index1, int &min_index2);
