//
// ������������ ������ �10. ��������� �������
// main.cpp
//
#include <iomanip>
#include <iostream>
#include "lab10.h"
#include "test_lab10.h"

using namespace std;

int main()
{
    test_full_lab10();
    setlocale(LC_ALL, "Rus");
    double a[MAX_N] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    uint n = 16;

    cout << fixed << setprecision(2);

    cout << endl << "�������� ������:" << endl;
    print(a, n);
    cout << endl << endl;

    // ������� ������, ��� ������ ��������� �������
    uint rows = 3, cols = 5;
    cout << "����� ������� ��� ������� " << rows << "x" << cols << ":" << endl;
    print_as_matrix(a, rows, cols);

    // ��������� ������������� ������ � �������   
    void *p = a;  // ����������� �� ���������� �� �������� ����

    // ������ �������������� ���������� �� ����������� ������ �� �����������
    // ���������� �������������� ������
    matrix &ma = *(matrix*)p;

    cout << endl << "����� ������� � ��������������� � matrix:" << endl;
    // ��� matrix ����� ������ 10�10
    // ��������� ��� ������ ������ ����� ����� 10
    print(ma);
    cout << endl;

    // ������ � ���������

    matrix m = {}; // �������������� ������!
    read(m, rows, cols);

    cout << "�������:" << endl;
    print(m, rows, cols);
    cout << endl;

    cout << "� ���� �������:" << endl;
    print(&m[0][0], rows*max_COLS);
    cout << endl << endl;
    
    cout << "� ������� ���� ������� ������: " << boolalpha << has_zero_row(m, rows, cols) << endl;
    cout << "� ������� ���� ������� �������: " << boolalpha << has_zero_col(m, rows, cols) << endl;

    system("pause");
    return 0;
}