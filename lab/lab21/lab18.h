//
// ������������ ������ �18. ������������ ��������� ������. ������
// lab18.h
//
#pragma once

typedef unsigned int uint;

// ���� ������:
//     tlist::datatype - ��� ������ ������;
//     data - �������� � ���� ������;
//     next - ��������� �� ��������� �������.
struct tlist
{
    typedef int datatype;
    datatype data;
    tlist *next;
};

// ������� �������� ������.
// ������ �������� � �������.
// ������� ���������:
//     length - ���������� ��������� ������.
// ���������� ��������� �� ������ ������� ������.
tlist *read_list(const uint length);