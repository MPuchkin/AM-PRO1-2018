//
// ������������ ������ �5. ���������� �������
// lab5.h
//

#pragma once
/* ��������� pragma � ���������� once �����������, 
 * ��� ������ ����������� ���� ����� ������� � ������������� ���� 
 * �� ����� ������ ����.
 *
 * �� ������ � Visual C++, � ��������� ������ �������� ����������.
 */

// double distance ( double x1, double y1, double x2, double y2 )
// ��������� ��������� ���������� ����� ����� ������� �� ���������.
// ���������:
//      x1, y1, x2, y2 � ������������ ���������� �����.
// ������������ ��������:
//      ���������� ����� �������  ( x1; y1 ), ( x2; y2 ). 
double distance ( double x1, double y1, double x2, double y2 );


// void sort ( double &a, double &b, double &c, bool asc = 0)
// ��������������� ������� ���������� ���� ��������.
// ���������:
//      a, b, c - �������� ��� ����������,
//      asc - ���� ����������� ����������:
//          false - �� �������� (�� ���������),
//          true - �� �����������.
// ���������:
//      a, b, c ��������������� � ������������ �� ��������� asc.
void sort ( double &a, double &b, double &c, bool asc = 0);


// enum triangleType
// ����� ������������� ��������, ����������� ��� ������������. 
enum triangle_type {
    tRight = 0,     // �������������
    tAcute,         // �������������
    tObtuse         // ������������
};

/* ������������ - ������� ������ ���������� ����� ��������, 
 * ������� ����� ��������� ���������� ��� ���������� �������.
 */

// triangle_type check_triangle_type ( double xa, double ya, double xb, double yb, double xc, double yc )
// ���������� ��� ������������, ��������� ����� �������.
// ���������:
//      xa, ya, xb, yb, xc, yc � ������������ ���������� �����
//          A ( xa, ya ), B ( xb, yb ), C ( xc, yc ).
// ������������ ��������:
//      tRight - �������������,
//      tAcute - �������������,
//      tObtuse - ������������.
triangle_type check_triangle_type ( double xa, double ya, double xb, double yb, double xc, double yc );


// double square ( double xa, double ya, double xb, double yb, double xc, double yc )
// ��������� ������� ������������, ��������� ����� �������.
// ���������:
//      xa, ya, xb, yb, xc, yc � ������������ ���������� ����� 
//          A ( xa, ya ), B ( xb, yb ), C ( xc, yc ).
// ������������ ��������:
//      ������� ������������ ABC.
double square ( double xa, double ya, double xb, double yb, double xc, double yc );


// double distance_to ( double from_x, double from_y, double to_x1, double to_y1, double to_x2, double to_y2 )
// ��������� ���������� �� ����� �� ������, �������� ����� �������.
// ���������:
//      from_x, from_y, to_x1, to_y1, to_x2, to_y2 �  ������������ ���������� ����� 
//          F ( from_x; from_y ), T1 ( to_x1; to_y1 ), T2 ( to_x2; to_y2 ).
// ������������ ��������:
//      ���������� �� ����� F ( from_x; from_y ) �� ������, �������� ������� T1 ( to_x1; to_y1 ), T2 ( to_x2; to_y2 ).
double distance_to ( double from_x, double from_y, double to_x1, double to_y1, double to_x2, double to_y2 );
