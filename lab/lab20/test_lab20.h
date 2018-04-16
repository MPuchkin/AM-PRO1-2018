//
// ������������ ������ �20. �������� � �������
// test_lab20.h
//

#pragma once
#include <initializer_list>
#include "lab20.h"

// ��������� ������-������:
// ������ �������� tlist, ������ �� �������
// ��������� �� ��������� ������� � �������.
// ��� �������� ����� ��������� 
// ������������ ���������� � �����.
typedef tlist *array_list;

// ������� ��������� �������-������ �� ������� ��������.
// ������� ���������:
//     list - ������ �������������.
// ���������� ������ ��������� tlist.
array_list test_list(const std::initializer_list<tlist::datatype> &list);

// ���� �� ��������� ���� �������
// ������� ���������:
//     begin1 - ��������� �� ������ ������� ������;
//     begin2 - ��������� �� ������ ������� ������.
// � ������ �� ���������� �������� ��������� ����������� assert.
bool is_equal_test(const tlist *begin1, const tlist *begin2);

// ���� ��� �������
// tlist *find(const tlist *begin, const tlist::datatype x)
// ��������� ������ ������� � ���������� ��������� � ������.
bool test_find();

// ���� ��� �������
// uint length(const tlist *begin);
// ��������� ������ ������� � �� ������� �������.
bool test_length(void *func = nullptr);

// ���� ��� �������
// tlist *add_last(tlist *&begin, tlist::datatype x);
// ��������� ������ ������� � �� ������� �������.
bool test_add_last(void *func = nullptr);

// ���� ��� �������
// ��������� ������ ������� � �� ������� �������.
bool test_insert_before(void *func = nullptr);

// ���� ��� �������
// ��������� ������ ������� � �� ������� �������.
bool test_remove_after(void *func = nullptr);

// ���� ��� �������
// ��������� ������ ������� � �� ������� �������.
bool test_remove_k_after_x(void *func = nullptr);

// ���� ���� ������� tlist.h
bool test_full_lab20();