//
// ������������ ������ �6. ������������
// test_lab5.h
//

#pragma once

 // �������� ��������� ������������ �����
const double precision = 1E-15;

// bool test_sqr(int number_of_tests)
// ��������:
// double sqr ( double x)
// �������� �������������, ������������� � ������� ��������.
bool test_sqr(int number_of_tests);

// bool test_distance()
// ��������:
// double distance ( double x1, double y1, double x2, double y2 )
// �������� ������� ���������� �������, 
// ������� �������������� ����� � ������� ������� �����.
bool test_distance();

// bool test_sort()
// ��������:
// void sort ( double &a, double &b, double &c, bool asc = 0)
// �������� ������ � ���������� �� ��������� � ���,
// �� ������������� � �� ������������� ������������������.
bool test_sort();

// bool test_check_triangle_type()
// ��������:
// triangle_type check_triangle_type ( double xa, double ya, double xb, double yb, double xc, double yc )
// �������� ������� ��������������, ��������������, 
// ������������� � ������������ �������������.
bool test_check_triangle_type();

// bool test_square()
// ��������:
// double square ( double xa, double ya, double xb, double yb, double xc, double yc )
// �������� ��� ���������������, �������������� 
// � ������������ �������������.
bool test_square();

// bool test_distance_to()
// ��������:
// double distance_to ( double from_x, double from_y, double to_x1, double to_y1, double to_x2, double to_y2 )
// �������� ������������ ����������, 
// ������ �������������� ����� ������, 
// ���������� ����� � ����� �� ������ �������.
bool test_distance_to();
