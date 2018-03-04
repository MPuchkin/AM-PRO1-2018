//
// ������������ ������ �10. ��������� �������
// lab10.h
//
#pragma once

typedef unsigned int uint;
const double precision = 1E-15;

// ������������ ���������� �����
const uint max_ROWS = 10;
// ������������ ���������� ��������
const uint max_COLS = 10;
// ���������������� ��� ������������ �������
typedef double matrix[max_ROWS][max_COLS];

// ������������ ����� ������������ �������
const uint MAX_N = max_COLS * max_ROWS;

// ����� ������� �� �������
// ���������:
//     a � ��������� �� ������ �������,
//     len � ������ �������.
void print(const double *a, const uint len);

// ����� ������� �� ������� � ���� �������
// ���������:
//     a � ��������� �� ������ �������,
//     rows - ���������� ����� ��� ������,
//     cols - ���������� ��������� � ������.
void print_as_matrix(const double * a, const uint rows, const uint cols);

// ���� ���������� ������� c ����������
// ���������:
//     m - ��������� �� ������ �������,
//     rows - ���������� ����� ������� m,
//     cols - ���������� �������� ������� m.
void read( matrix m, uint &rows, uint &cols);

// ����� ���������� ������� �� �������
// ���������:
//     m - ��������� �� ������ �������,
//     rows - ���������� ����� ������� (�� ��������� max_ROWS),
//     cols - ���������� �������� ������� (�� ��������� max_COLS).
void print(const matrix m, const uint rows = max_ROWS, const uint cols = max_COLS);

// ��������, ��� ������ ������� �� �����
// ���������:
//     a � ��������� �� ������ �������,
//     len � ������ �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ��� �������� ����� ����.
bool is_zeros(const double * a, const uint len, const double precision = 0.0);

// ��������, ��� � ������� ���� ������� �������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������� �� �����.
bool has_zero_col(const matrix m, const uint rows, const uint cols, const double precision = 0.0);

// ��������, ��� � ������� ���� ������� ������
// ���������:
//     m � ��������� �� ������ �������,
//     rows - ���������� ����� �������,
//     cols - ���������� �������� �������,
//     precision � �������� ���������.
// ������������ ��������:
//     true, ���� ���������� ������ �� �����.
bool has_zero_row(const matrix m, const uint rows, const uint cols, const double precision = 0.0);

// �������� �� ������� ���� ������� ��������
// ���������:
//     m � ��������� �� ������ �������,
//     rows � ���������� ����� �������,
//     cols � ���������� �������� �������,
//     precision � �������� ���������.
// ���������:
//     m � ������� ��� ������� ��������,
//     cols � ����� ����� ��������.
void remove_zero_cols(matrix m, const uint rows, uint &cols, const double precision = 0.0);

// ������� � ������� ������ � �������� �������, �� ��������� ��������� ����� ����
// ���������:
//     m � ��������� �� ������ �������,
//     rows � ���������� ����� �������,
//     cols � ���������� �������� �������,
//     row � ����������� ������,
//     index � ������ ������� ��� �������.
// ���������:
//     m � ������� �� ����������� ������� row � ������� index,
//     rows � ����� ����� �����.
void insert_row(matrix m, uint &rows, const uint cols, const double *row, const uint index);

// ���������������� ������������� �������
// ���������:
//     m � ��������� �� ������ �������,
//     rows � ���������� ����� �������,
//     cols � ���������� �������� �������.
// ���������:
//     m � ����������������� �������,
//     rows � ����� ����� �����,
//     cols � ����� ����� ��������.
void transpose(matrix m, uint &rows, uint &cols);

// ��������� ������������� ������:
// � = �*�
// ���������:
//     a, b, � � ��������� �� ������ ������,
//     a_rows, a_cols � ���������� ����� � �������� ������ �������,
//     b_rows, b_cols � ���������� ����� � �������� ������ �������.
void multiply(const matrix a, const uint a_rows, const uint a_cols, const matrix b, const uint b_rows, const uint b_cols, matrix c);
