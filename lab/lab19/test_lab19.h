//
// ������������ ������ �19. ������. ��������� �������.
// test_lab19.h
//

#pragma once

#include "lab19.h"

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

bool test_read_list();

bool test_insert_middle(void *func = nullptr);

// void remove_k_after_x(const tlist *begin, tlist::datatype x, uint k);
bool test_remove_k_after_x(void *func = nullptr);

//void insert_x_before_y(tlist *&begin, tlist::datatype x, tlist::datatype y);
bool test_insert_x_before_y(void *func = nullptr);

// tlist *read_sorted(const char *filename);
bool test_read_sorted(void *func = nullptr);

// ���� ���� ������� tlist.h
bool test_full_lab19();