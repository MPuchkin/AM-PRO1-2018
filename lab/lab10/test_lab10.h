//
// ������������ ������ �10. ��������� �������
// test_lab10.h
//
#pragma once
#include <cassert>
#include "lab10.h"

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

// ������������ ������� �������:
// template <typename T> 
// bool is_equal_matrix(const T a, const T b, const size_t m, const size_t n, const double precision)
bool test_is_equal_matrix();

// ������������ �������:
// bool is_zeros(const double * a, const uint len, const double precision)
// �������� �������� � �� �������� ��������, ������� � ����� �����
bool test_is_zeros();

// ������������ �������:
// bool has_zero_row(const matrix m, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_row();

// ������������ �������:
// bool has_zero_col(const matrix m, const uint rows, const uint cols, const double precision)
// �������� ������� � ������ � ���
bool test_has_zero_col();

// ������������ �������:
// void remove_zero_cols(matrix m, const uint rows, uint &cols, const double precision)
// �������� �� �������� �� ������� �������, ������� �������������� � ������� ��� ������� ��������
bool test_remove_zero_cols(void *func = nullptr);

// ������������ �������:
// void insert_row(matrix m, uint &rows, const uint cols, const double *row, const uint index)
// �������� ������� � �������� � � ����� �������
bool test_insert_row(void *func = nullptr);

// ������������ �������:
// void transpose(matrix m, uint &rows, uint &cols)
// �������� ���������������� ������������� �������
bool test_transpose(void *func = nullptr);

bool test_multiply(void *func = nullptr);

// ������ ������ ���� ������ �� ���� ����������
bool test_full_lab10();