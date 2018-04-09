//
// ������������ ������ �18. ������������ ��������� ������. ������
// main.cpp
//


#include <iostream>
#include "crtdynmem.h"
#include "lab18.h"
#include "test_lab18.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    test_full_lab18();

    _CrtMemState _ms;
    _CrtMemCheckpoint(&_ms);
    
    uint n;
    cout << "������� ���������� ��������� ������" << endl;
    cin >> n;
    cout << "������� �������� ������" << endl;
    tlist * list = read_list(n);

    tlist *p = find(list, 0);
    int cnt = 0;
    while (p) {  // p != nullptr
        cnt++;
        p = find(p->next, 0);
    }

    cout << "���������� ������� ���������: " << cnt << endl;
    delete_list(list);

    _CrtMemDumpAllObjectsSince(&_ms);

    system("pause");
    return 0;
}