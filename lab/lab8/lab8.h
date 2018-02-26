//
// ������������ ������ �8. ������ � �����������
// lab8.h
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
//      x - �������� �������
//      precision - ���������� ������ ����� �������.
void print_func(simple_func f, double x, uint precision);

// �������� ������� �������� ��������� �������
// ���������:
//      a, b - ��������� �� ��������,
//      size - ������ �������� � ������.
void swap_ptr(void * a, void * b, uint size);

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
void read(int *a, int &n);

// ����� ������� �� �������
// ���������:
//     a � ������,
//     n � ������ �������.
void print(const int *a, int n);

typedef bool(*condition)(int);

// ������� ��������, ��� ��� �������� ������� ������������� �������
// ���������:
//      cond - ��������,
//      x - ��������� �� ������ ��������,
//      size - ���������� ��������� �������.
// ������������ ��������:
//     true, ���� ��� �������� � ������� ������������� �������.
bool all(condition f, const int *x, const uint size);