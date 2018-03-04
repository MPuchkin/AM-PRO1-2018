//
// �������� ������ �6. ������������ ��������� �������
// test_hw6.h
//
#pragma once
#include <cassert>
#include <initializer_list>
#include "hw6.h"

// ������ ������� ��������� ���� ������ �� ���������.
// ������� ���������:
//     a, b - ��������� �� ������ �������,
//     rows - ���������� ����� ������ �, b,
//     cols - ���������� ���������� �������� ������ �, b,
//     precision - �������� ���������, �� ��������� = 0.
// ������������ ��������:
//     true - ���� ��� �������� ������ �����.
template <typename T>
bool is_equal_matrix(const T a, const T b, const uint rows, const uint cols, const double precision = 0.0)
{
    assert(a != nullptr);
    assert(b != nullptr);
    if (a == b) return true;

    for (uint i = 0; i < rows; ++i)
        for (uint j = 0; j < cols; ++j)
            if (fabs(a[i][j] - b[i][j]) > precision)
                return false;
    return true;
}

// ������� ��������� ������������ ������������� ������� � ��������� ����������
double **test_sparce_matrix(const std::initializer_list<std::initializer_list<double>> &m, uint &rows, uint &cols);

// ������������ ������� �������:
// template <typename T> 
// bool is_equal_matrix(const T a, const T b, const size_t m, const size_t n, const double precision)
bool test_is_equal_matrix();

// ������������ �������:
// bool is_zeros(const double * a, const uint len, const double precision)
// �������� �������� � �� �������� ��������, ������� � ����� �����
bool test_is_zeros();

// ������������ �������:
// bool has_zero_row(const double *a, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_row_compact();

// ������������ �������:
// bool has_zero_row(double const* const* m, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_row_sparce();

// ������������ �������:
// bool has_zero_col(const double *a, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_col_compact();

// ������������ �������:
// bool has_zero_col(double const* const* m, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_col_sparce();

// ������ ���� ������ ����������
bool test_full_hw6();