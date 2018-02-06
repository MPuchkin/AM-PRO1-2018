//
// ������������ ������ �6. ������������
// test_lab5.cpp
//

#include <iostream>
#include <cmath>
#include <cassert>

#include "lab5.h"
#include "test_lab5.h"

using namespace std;

bool test_sqr(int number_of_tests)
{
    // std::cerr - ����������� ����� ������ ��� ������
    // �� ��������� ������� �� �������    
    cerr << "test sqr: ";

    int n = 0;
    while (n < number_of_tests) {
        double a = rand() * (0.5 - (double)rand() / RAND_MAX);
        double result = a*a;
        
        assert(abs(sqr(a) - result) < precision);
        n += 1;
    }

    // ��� ����� �������� �������
    cerr << "OK" << endl;
    return true;
}


bool test_distance()
{  
    cerr << "test distance: ";

    // ���� 1 - ��������� �������
    double x1 = 0, y1 = 0;
    double x2 = 1, y2 = 0;
    double result = 1;
    
    assert( abs( distance(x1, y1, x2, y2) - result) < precision);
    
    // ���� 2 - ������� �������������� �����
    x1 = 2; y1 = 5;
    x2 = 3; y2 = 4;
    result = sqrt(2);

    assert ( abs( distance (x1,y1,x2,y2) - result) < precision);

    // ���� 3 - ������� ������� �����
    // ������� ���� ��� ������� ������� �����
    x2 = 2; y2 = 5;
    result = 0;
    assert ( abs( distance(x1, y1, x2, y2) - result) < precision);
  
    cerr << "OK" << endl;
    return true;
}

bool test_full_func_l2()
{
    // �������� ������� � ������ ������� (������ _DEBUG)
#ifdef _DEBUG
    // ���� ��� ����� ������������� ������ � ������ �������
    int number_of_tests = 100;
    return test_sqr(number_of_tests) && test_distance();

#endif /* _DEBUG */

    return false;
}
