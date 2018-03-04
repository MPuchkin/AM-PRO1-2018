//
// ������������ ������ �10. ��������� �������
// lab10.cpp
//
#include <cassert>
#include <iomanip>
#include <iostream>
#include "lab10.h"

using namespace std;

void print(const double *a, uint n)
{
    assert(a != nullptr);
    const double *p = a;
    while ((p - a) < n) {
        cout << *p++ << " ";
    }
}

void print_as_matrix(const double * a, const uint rows, const uint cols)
{
    assert(a != nullptr);
    
    for (uint i = 0; i < rows; ++i) 
    {
        for (uint j = 0; j < cols; ++j) 
        {
            // �������������� ����� ��� ������������ ��������
            cout << setw(cout.precision() * 2 + 1);
            cout << a[i*cols + j] << " ";
        }
        cout << endl;
    }
}

void print_as_matrix4x4(const double * a)
{
    assert(a != nullptr);
    const uint rows = 4, cols = 4;

    double(&m)[rows][cols] = *((double(*)[rows][cols])(const void*)a);

    for (uint i = 0; i < rows; ++i) {
        for (uint j = 0; j < cols; ++j) {
            // �������������� ����� ��� ������������ ��������
            cout << setw(cout.precision() * 2 + 1);
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void read(matrix m, uint & rows, uint & cols)
{
    assert(m != nullptr);
    cout << "������� ���������� ����� < " << max_ROWS << endl;
    do {
        cin >> rows;
    } while (rows < 1 || rows >= max_ROWS);
    cout << "������� ���������� �������� < " << max_COLS << endl;
    do {
        cin >> cols;
    } while (cols < 1 || cols >= max_COLS);

    cout << "������� " << rows*cols << " ���������" << endl;
    for (uint i = 0; i < rows; ++i)
        for (uint j = 0; j < cols; ++j)
            cin >> m[i][j];
}

void print(const matrix m, const uint rows, const uint cols)
{
    assert(m != nullptr);

    for (uint i = 0; i < rows; ++i) {
        for (uint j = 0; j < cols; ++j) {
            // �������������� ����� ��� ������������ ��������
            cout << setw(cout.precision() * 2 + 1);
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

bool is_zeros(const double *a, const uint len, const double precision)
{
    for (uint i = 0; i < len; ++i) {
        if (fabs(a[i])>precision)
            return false;
    }
    return true;
}

bool has_zero_row(const matrix m, const uint rows, const uint cols, const double precision)
{    
    for (int i = 0; i < rows; ++i) {
        // ������ ������� ������������� � ������ �������,
        // �� ����� ������������ ��� ��������� ������
        if (is_zeros(&m[i][0], cols, precision)) 
            return true;
    }
    return false;
}

bool has_zero_col(const matrix m, const uint rows, const uint cols, const double precision)
{
    for (int j = 0; j < cols; ++j) {
        // ������� �� ������� ������� 
        // ��� ������������� �������������� ������ 
        // �� ��������
        bool is_zero_col = true;        
        for (int i = 0; i < rows; ++i) 
        {
            // �������� ��������� �� ������� ��������� � �������
            is_zero_col = is_zero_col && fabs(m[i][j]) <= precision;
        }
        if (is_zero_col)
            return true;
    }
    return false;
}