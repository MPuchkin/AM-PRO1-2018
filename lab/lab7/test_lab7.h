//
// ������������ ������� �7. �������, ��������� ��������.
// test_lab7.h
//
#pragma once

// �������� ��������� ������������ �����
const double precision = 1E-10;

// ������ ���������� ��������������� ����
typedef int(*int_array_func)(const int a[], int n);

// ����� ��������:
// int find_zero(const int a[], int n)
// �������� �������: ���� ����, ��� ����.
bool test_first_zero(int_array_func f);

// ����� ��������:
// int product_positive_after_zero(const int a[], int n)
// �������� �������: ��������� ����, �������� ����, ��� ����.
bool test_product_positive_after_zero(int_array_func f);

// ����� ��������:
// double divide_sums_around_min(const double a[], int n)
// �������� �������: ������� ������, ������� ���������, ������� � �������� �������.
bool test_divide_sums_around_min(void *func = nullptr);

// ����� ��������:
// void remove_duplicates(int a[], int &n)
// �������� �������: ��� ����������, ������ ������� ������������� ���� ���, ��������� ���������� ������.
bool test_remove_duplicates(void *func = nullptr);

// ����� ��������:
// void insert_duplicates(int a[], int &n)
// �������� ������������ �������.
bool test_insert_duplicates(void *func = nullptr);

// ����� ��������:
// bool is_symmetrical(const int a[], int n, int startIndex = 0)
// �������� �������: ������������, �� ������������ �������; ������� ������ � �������� �����.
bool test_is_symmetrical(void *func = nullptr);

// ������ ������ ���� ������ ��
bool test_full_lab7();