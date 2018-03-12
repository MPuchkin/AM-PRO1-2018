//
// ������������ �11. ������������ �������. ��������� ������.
// lab11.h
//
#pragma once

typedef unsigned int uint;
const double precision = 1E-15;

// ���� ���������� ������� c ����������
// ���������:
//     m - ��������� �� ������ �������,
//     rows - ���������� ����� ������� m,
//     cols - ���������� �������� ������� m.
void read_new(double** &m, uint &rows, uint &cols);

// ������������ ������ ���������� ��������� ��������
// ���������:
//     m - ��������� �� ������ �������,
//     rows - ���������� ����� ������� m,
//     cols - ���������� �������� ������� m.
void delete_matrix(double** &m, const uint rows, const uint cols = 0);

// ����� ������� �� �������
// ���������:
//     a � ������,
//     n � ������ �������.
void print(const int *a, uint n);

// ����� ������� �� �������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� ��� ������,
//     cols - ���������� ��������� � ������.
void print(double const* const* m, const uint rows, const uint cols);

// ����� ����������� ������������� �������� � �������
double min_positive(const double *a, const uint size);

// ����� ����������� ������������� �������� � �������
double min_positive(double const* const* m, const uint rows, const uint cols);

// ����� ��������� ���� ��������� �� ������� � �������� ���������� �������
double major_div_minor(double const* const* a, const uint rows, const uint cols);

typedef double aggregate(const double*, const uint);
// �������� � ������� ������� ��������� ���������� �������� ����������� ������ ��� ������ ������
void append_col(double** &a, const uint rows, uint &cols, aggregate aggr);

typedef bool condition(const double*, const uint);
// ������� �� ������� ������ ��������������� ��������� �������� �������.
void remove_rows(double** &a, uint &rows, const uint cols, condition cond);
