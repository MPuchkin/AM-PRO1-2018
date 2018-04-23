//
// ������������ ������ �22. ���������� ������. ��������� �������.
// test_lab22.h
//

#pragma once

#include "lab22.h"

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
array_llist test_list(const std::initializer_list<llist::datatype> &list, llist *&end);

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

bool test_insert_middle(void *func = nullptr);

// void remove_k_after_x(const tlist *begin, tlist::datatype x, uint k);
bool test_remove_k_after_x(void *func = nullptr);

//void insert_x_before_y(tlist *&begin, tlist::datatype x, tlist::datatype y);
bool test_insert_x_before_y(void *func = nullptr);

// tlist *read_sorted(const char *filename);
bool test_read_sorted(void *func = nullptr);

// ���� ���� ������� tlist.h
bool test_full_lab22();