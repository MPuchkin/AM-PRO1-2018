//
// ������������ ������ �8. ������ � �����������
// test_lab8.h
//
#pragma once

// ��������:
// void swap_ptr(void *a, void *b, uint size)
// �������� ���������� ���� int, double, char.
bool test_swap_ptr(void *f = nullptr);

// ��� ������������ ������� � �������� ��������
// ������ ���������� ��������� ����������� (������ � ����)
// � ����������� ���������� �����������.
// bool test_tab();

// ��������:
// double root(double(*const f)(double), const double a, const double b, const double eps)
// ���������  sin [-1; 1]
//            cos [0; 2]
//            x^2 - 1 [0; 1] [-1;0] [2;0]
bool test_root(void *func = nullptr);

// ��������:
// bool all(condition f, const int *x, const uint size)
bool test_all(void *func = nullptr);

// ����������� ������ ���� ������ ������ ����������
bool test_full_lab8();