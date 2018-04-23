//
// ������������ ������ �21. ���������� ������
// lab21.h
//
#pragma once

typedef unsigned int uint;

// ���� ����������� ������:
//     llist::datatype - ��� ������ ������;
//     data - �������� � ���� ������;
//     prev - ��������� �� ���������� �������;
//     next - ��������� �� ��������� �������.
struct llist
{
    typedef int datatype;
    datatype data;
    llist *prev;
    llist *next;
};

// ������� �������� ����������� ������ .
// ������� ���������:
//     length - ���������� ��������� ������.
// �������� ��������:
//     end - ��������� �� ����� ������.
// ���������� ��������� �� ������ ������� ������ ������.
llist *read_list(const char *filename, llist *&end);

// ��������� ������� �������� ��������� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������.
// �������� �������� ��������� begin ����� nullptr.
template <typename List>
void delete_list(List *&begin)
{
    while (begin != nullptr) {
        List *t = begin;
        begin = begin->next;
        delete t;
    }
}

// ��������� ������� ������ ��������� ������ �� �������.
// ������� ���������:
//     begin - ��������� �� ������ ������.
template <typename List>
void print_list(const List *begin) 
{
    while (begin != nullptr) {
        cout << begin->data << ' ';
        begin = begin->next;
    }
    cout << endl;
}

template <typename List, typename Datatype>
List *find(const List *begin, Datatype x)
{
    const List *t = begin;

    while (t != nullptr) {
        if (t->data == x)
            break;
        t = t->next;
    }

    // ������� ������������� ���������
    // �.�. �� �����, ��� ���������� ������ �� ����������� tlist*
    return  const_cast<List *>(t);
}


// ���������� ��������� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������/
// ���������� ���������� ��������� ������
template <typename List>
uint length(const List *begin);

// ������� �������� � ������ ������.
// ������� ���������:
//     begin - ��������� �� ������ ������;
//     x - ����� ��������.
// ���������� ��������� �� ����� ������ ������.
llist *add_first(llist *&begin, llist *&end, llist::datatype x);

// ������� �������� � ����� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������;
//     x - ����� ��������.
// ���������� ��������� �� ����� ����� ������.
llist *add_last(llist *&begin, llist *&end, llist::datatype x);

// ������� ������ �������� ����� ��������� ��������� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������;
//     item - ��������� �� ������� ��� �������;
//     x - ����� ��������.
// ���������� ��������� �� ����� ������� ������.
llist *insert_before(llist *&begin, llist *&end, llist *item, llist::datatype x);

// ������� ������ �������� ����� ���������� �������� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������;
//     item - ��������� �� ������� ��� �������;
//     x - ����� ��������.
// ���������� ��������� �� ����� ������� ������.
llist *insert_after(llist *&begin, llist *&end, llist *item, llist::datatype x);

// �������� �������� ����� ���������� �������� ������.
// ������� ���������:
//     item - ��������� �� ������� ��� ��������.
void remove(llist *&begin, llist *&end, llist *item);
