//
// ������������ ������ �4. ������������ �������.
//
#pragma once
#include <initializer_list>
#include "lab11.h"


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

// ������� ��������� ������������� ������� � ��������� ����������
int *test_array(std::initializer_list<int> list, uint &size);

// ������� ��������� ������������ ������������� ������� � ��������� ����������
double **test_sparce_matrix(const std::initializer_list<std::initializer_list<double>> &m, uint &rows, uint &cols);

bool test_find_zeros();

bool test_duplicate_between_zeros();

bool test_lab11_full();
