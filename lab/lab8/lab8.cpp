//
// ������������ ������ �8. ������ � �����������
// lab8.cpp
//
#include <cassert>
#include <iomanip>
#include <iostream>
#include "lab8.h"

using namespace std;

void print_float(float * t)
{
    assert(t != nullptr); // �� ������ ���������
    
    // fixed - ������������� ������ ������ 
    // � ������������� ������ ��� ����� ������
    cout << fixed;
    // setprecision - ������������� ���������� ������ 
    // ����� ������� ��� ����� ������
    //
    cout << setprecision(4);
    cout << "0x" << t << " | ";
    cout << setw(10) << "float" << " | ";
    cout << setw(10) << *t << " | ";
    
    // hex - ������������� ������ ������ 
    // ����� ����� � ����������������� �����
    cout << setw(10) << hex << *(int*)t << endl;
}

void print_int(int * t)
{
    assert(t != nullptr); // �� ������ ���������

    cout << "0x" << t << " | ";
    cout << setw(10) << "int" << " | "; 

    // dec - ������������� ������ ������ 
    // ����� ����� � ���������� �����
    cout << setw(10) << dec << *t << " | ";
    
    // hex - ������������� ������ ������ 
    // ����� ����� � ����������������� �����
    cout << setw(10) << hex << *t << endl;
}

void print_func(simple_func f, double x, uint precision)
{
    assert(f != nullptr);
    cout << fixed << setprecision(precision) << defaultfloat;
    cout << "f: 0x" << f << " | ";
    cout << "x: " << setw(2 * precision + 1) << x << " | ";
    cout << "f(x): " << setw(2 * precision + 1) << f(x) << endl;
}

void read(int *a, int &n)
{
    assert(a != nullptr);
    cout << "������� N<" << max_N << endl;
    do {
        cin >> n;
    } while (n < 1 || n >= max_N);

    cout << "������� " << n << " ��������" << endl;
    
    int *p = a;
    while ((p - a) < n) {
        cin >> *p++;
    }
}

void print(const int *a, int n)
{
    assert(a != nullptr);
    assert(n>0 && n<max_N);

    const int *p = a;    
    while ((p - a) < n) {
        cout << *p++ << " ";
    }

    cout << endl;
}
