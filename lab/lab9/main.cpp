//
// ������������ �9. ������������ �������, ����� ������� ����������.
// main.cpp
//
#include <iostream>
#include "crtdynmem.h"
#include "lab9.h"

using namespace std;

int main()
{
	//test_full_lab9();
    setlocale(LC_ALL, "Rus");

    int *a = nullptr;  // ������������ ���������� ��� ���������� � ����� �������� ������� 
    uint n = 0;

    // C����� ����� ������� 
    // ��� ����� ����������� ���������� ������
    _CrtMemState _ms;
    _CrtMemCheckpoint(&_ms);

	read(a, n);
	qsort(a, n);
	print(a, n);
    
    //delete [] a;   

	 // ������ � �� ����������� ������������ ������!     
     // ������� ��� ������ ������ � ������ �������
	 _CrtMemDumpAllObjectsSince(&_ms);

     // ������� ��� ������ ������ � ������� ������ ������
     // _CrtDumpMemoryLeaks();
    system("pause");
    return 0;
}