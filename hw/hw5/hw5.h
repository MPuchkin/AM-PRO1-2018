#pragma once

typedef unsigned int uint;

typedef double(*simple_func)(double);

typedef void(*sort_int)(int*, const uint);

// ���������� ������� �������� ����������
// ���������:
//     sort � ������ ������� ����������,
//     sort_number � ���������� ������� ����������,
//     min, max � ������� ���������� ���������,
//     rows � ���������� ����� �������.
// ���������:
//     N|    sort1|    sort2|    ...
//   min|      ...|      ...|    ...
//   ...|      ...|      ...|    ...
//   max|      ...|      ...|    ...
void sort_time_print(const sort_int *sort, const uint sort_number, const uint min, const uint max, const uint rows)

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

// ������� �� ������� ��� ��������, ������� �������� ��������������� ��������� �������.
// �������� ������������ ������!
void remove_less_avg(double *&a, uint &size);

// �������� ����� ������ ����� ��������� �������� �������� ���� ���������.
// �������� ������������ ������!
void insert_diff(double *&a, uint &size);