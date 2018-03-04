//
// �������� ������ �6. ������������ ��������� �������
// hw6.h
//
#pragma once

typedef unsigned int uint;
const double precision = 1E-15;

// ���� ���������� ������� c ����������
// ���������:
//     a - ��������� �� ������ �������,
//     rows - ���������� ����� ������� m,
//     cols - ���������� �������� ������� m.
void read_new(double* &a, uint &rows, uint &cols);

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

// ����� ������� �� ������� � ���� �������
// ���������:
//     a � ��������� �� ������ �������,
//     rows - ���������� ����� ��� ������,
//     cols - ���������� ��������� � ������.
void print(const double * a, const uint rows, const uint cols);

// ����� ������� �� �������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� ��� ������,
//     cols - ���������� ��������� � ������.
void print(double const* const* m, const uint rows, const uint cols);

// ��������, ��� ������ ������� �� �����
// ���������:
//     a � ��������� �� ������ �������,
//     len � ������ �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ��� �������� ����� ����.
bool is_zeros(const double * a, const uint len, const double precision = ::precision);

// ��������, ��� � ������� ���� ������� �������
// ���������:
//     a � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������� �� �����.
bool has_zero_col(const double *a, const uint rows, const uint cols, const double precision = ::precision);

// ��������, ��� � ������� ���� ������� �������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������� �� �����.
bool has_zero_col(double const* const* m, const uint rows, const uint cols, const double precision = ::precision);

// ��������, ��� � ������� ���� ������� ������
// ���������:
//     a � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������ �� �����.
bool has_zero_row(const double *a, const uint rows, const uint cols, const double precision = ::precision);

// ��������, ��� � ������� ���� ������� ������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������ �� �����.
bool has_zero_row(double const* const* m, const uint rows, const uint cols, const double precision = ::precision);