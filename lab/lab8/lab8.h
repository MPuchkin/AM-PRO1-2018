//
// ������������ ������ �8. ������� � ���������
// lab.h
// 
#pragma once

typedef double(*simple_func)(double);
typedef unsigned int uint;

const double precision = 1E-16;
const uint max_N = 100;

// ����� ������������� ����� �� ���������
void print_float(float * t);

// ����� ������ ����� �� ���������
void print_int(int * t);



// ����� �������� ������� � ����� �� ��������� �� �������
// ���������:
//      f - ��������� �� ������� �������,
//      x - �������� �������.
void print_func(simple_func f, double x, uint precision);

// �������� ������� �������� ��������� �������
// ���������:
//      a, b - ��������� �� ��������,
//      size - ������ �������� � ������.
void swap(void * a, void * b, uint size);

// ����� ���� �������� ������� �� ������� [a;b] � ����� h
// ���������:
//      f - ��������� �� ������� �������,
//      a, b - ������� �������,
//      h - ��� ��������� (�� ��������� = precision).
// ���������:
//      ����� �������� ������� � ����: x: | f(x):
//      ��� x = {a, a+h, a+2h, ... b} 
//      �� ����������� �����.
void tab(const simple_func f, const double a, const double b, const double h = precision);

// ����� ����� ������� �� ������� [a;b] � ��������� eps ������� ������� �������.
// ���������:
//      f - ��������� �� ������� �������,
//      a, b - ������� ������� (f(a)*f(b) < 0),
//      eps - �������� ������ (�� ��������� = precision).
// ������������ ��������:
//      �������� ����� ������� �� �������.
double root(const simple_func f, const double a, const double b, const double eps = precision);

// ���� ������� � ����������
// ���������:
//     a � ������, ������� ����� ��������,
//     n � ������ ���������� �������.
void read(double *a, int &n);

// ����� ������� �� �������
// ���������:
//     a � ������,
//     n � ������ �������.
void print(const double *a, int n);

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