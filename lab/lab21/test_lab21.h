//
// ������������ ������ �21. ���������� ������
// test_lab21.h
//

#pragma once
#include <cassert>
#include <initializer_list>
#include "lab21.h"

// ��������� ������-������:
// ������ �������� tlist, ������ �� �������
// ��������� �� ��������� ������� � �������.
// ��� �������� ����� ��������� 
// ������������ ���������� � �����.
typedef llist *array_llist;

// ������� ��������� �������-������ �� ������� ��������.
// ������� ���������:
//     list - ������ �������������.
// ���������� ������ ��������� tlist.
array_llist test_list(const std::initializer_list<llist::datatype> &list);

// ���� �� ��������� ���� �������
// ������� ���������:
//     begin1 - ��������� �� ������ ������� ������;
//     begin2 - ��������� �� ������ ������� ������.
// � ������ �� ���������� �������� ��������� ����������� assert.
template <typename List>
bool is_equal_test(const List *begin1, const List *begin2)
{
    while (begin1 != nullptr && begin2 != nullptr) {
        // ���������� ���������� � ��������� �������
        assert(begin1->data == begin2->data);
        begin1 = begin1->next;
        begin2 = begin2->next;
    }
    // ���������� ���������� ����������� � �������� �����������
    assert(begin1 == begin2);
    return true;
}

// ���� ��� �������
// tlist *find(const tlist *begin, const tlist::datatype x)
// ��������� ������ ������� � ���������� ��������� � ������.
bool test_find();

// ���� ��� �������
// uint length(const tlist *begin);
// ��������� ������ ������� � �� ������� �������.
bool test_length(void *func = nullptr);

// ���� ��� �������
// tlist *add_first(tlist *&begin, tlist::datatype x);
// ��������� ������ ������� � �� ������� �������.
bool test_add_first(void *func = nullptr);

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

// ���� ���� ������� tlist.h
bool test_full_lab18();