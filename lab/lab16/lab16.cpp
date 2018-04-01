//
// ������������ �16. ��������� �����. ��������� �������
// lab16.cpp
//
#include <iostream>
#include <string>
#include <sstream>
#include "lab16.h"

using namespace std;

person read_person(const std::string &s)
{
    person prs;
    // ����� ������ �� ������
    istringstream sin(s);

    // ���������� �� ������� ������� ���������
    sin.getline(prs.fullname, sizeof(prs.fullname), '\t');

    sin >> prs.birthday.day >> prs.birthday.month >> prs.birthday.year;

    // ���� ���� ������ ������
    if (!sin.eof() || strlen(prs.fullname) == 0)
        throw "�������� ������ ������� ������";

    return prs;
}