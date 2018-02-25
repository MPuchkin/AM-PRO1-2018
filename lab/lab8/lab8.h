//
// ������������ ������ �8. ������� � ���������
// lab.h
// 
#pragma once

const double precision = 1E-16;

typedef double(*simple_func)(double);

void table(const simple_func funcs[], int func_size, const double points[], int points_size);

// ����� ���� �������� ������� �� ������� [a;b] � ����� h
// ���������:
//      f - ��������� �� ������� �������,
//      a, b - ������� �������,
//      h - ��� ��������� (�� ��������� = precision).
// ���������:
//      ����� �������� ������� � ����: x | f(x)
//      ��� x = {a, a+h, a+2h, ... b} 
//      �� ����������� �����.
void tab(const simple_func f, const double a, const double b, const double h = precision);

// double root(double(*const f)(double), const double a, const double b, const double eps)
// ����� ����� ������� �� ������� [a;b] � ��������� eps ������� ������� �������.
// ���������:
//      f - ��������� �� ������� �������,
//      a, b - ������� ������� (f(a)*f(b) < 0),
//      eps - �������� ������ (�� ��������� = precision).
// ���������:
//      �������� ����� ������� �� �������.
double root(const simple_func f, const double a, const double b, const double eps = precision);