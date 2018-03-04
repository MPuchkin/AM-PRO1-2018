//
// �������� ������ �6. ������������ ��������� �������
// main.cpp
//
#include <iomanip>
#include <iostream>
#include "crtdynmem.h"
#include "hw6.h"
#include "test_hw6.h"

using namespace std;

int main()
{
    test_full_hw6();
    setlocale(LC_ALL, "Rus");
    cout << fixed << setprecision(2);

    // ��������� ��������� ������������ ������
    _CrtMemState _ms;
    _CrtMemCheckpoint(&_ms);

    // ��� ��������� �������� ������ 
    // � ���������� ��������� � ������������ ������:
    
    // �����������
    double *a = nullptr;
    // ������ �������� � ����������� ����� ������,
    // ��� ����������� ��������� ������ double[][]

    // �����: ������ ���������� ������ ��� �������� �������;
    //        �������� ����������� �������� ����� ���������� ���� ������;
    //        ������������� ����� delete[].

    // ������: ������ ������������ ��������� � ����� ��������� a[i][j];
    //         ����������, �������� ����� ���� � ������������ ����� �������.

    uint rows, cols;
    read_new(a, rows, cols);
    print(a, rows, cols);

    cout << "� ������� ���� ������� ������: " << boolalpha << has_zero_row(a, rows, cols) << endl;
    cout << "� ������� ���� ������� �������: " << boolalpha << has_zero_col(a, rows, cols) << endl;
    
    delete[] a; 
    a = nullptr;

    // �����������
    double **m = nullptr;
    // ������ ���������� �� ��������� ������

    // �����: ����� ���������� � ����� ��������� m[i][j];
    //        �������� ����� �������������� ��� ���������� m[i],
    //        ����������, �������� ����� ������ �� ������ �� ���������.

    // ������: ��������� ������ ��� ������ ������ ������������ ����������� ���� ������� �����������
    //         �������� ������ � �������� �������;
    //         ������ ������ ����� ����������� ��������, ����� ����� ������ ������.

    read_new(m, rows, cols);
    print(m, rows, cols);

    cout << "� ������� ���� ������� ������: " << boolalpha << has_zero_row(m, rows, cols) << endl;
    cout << "� ������� ���� ������� �������: " << boolalpha << has_zero_col(m, rows, cols) << endl;

    delete_matrix(m, rows);
    
    _CrtMemDumpAllObjectsSince(&_ms);  // ��������� ���������� ������ ������
    
    system("pause");
    return 0;
}