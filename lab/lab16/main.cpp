//
// ������������ �16. ��������� �����. ��������� �������
// lab16.h
//
#include <iostream>
#include "structs.h"
#include "test_structs.h"

using namespace std;

/*
  ���������� ���������� ����� � �����.
*/

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    test_full_lab16();

    // ������� ���� �� ������
    fstream file("points.dat", ios::in);
    // ������� � ����� �����
    file.seekg(0, fstream::end);
    // ������� ������� ��������� ���������
    cout << "������ �����: " << file.tellg() << " ����" << endl;
    
    file.close();

    uint count_points = number_of<point>("points.dat");
    cout << "���������� ����� � �����: " << count_points << endl;

    system("pause");
    return 0;
}