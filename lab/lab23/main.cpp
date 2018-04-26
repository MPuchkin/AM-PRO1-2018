//
// ������������ ������ �2. �������
// main.cpp
//
#include <iostream>
#include "crtdynmem.h"
#include "lab23.h"
#include "test_lab23.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    test_get_array_tree();
	cout << "������� 10 ��������: " << endl;
    tree *root = read_tree(10);
    print_tree(root);
    cout << "���������� �������: " << leaves_count(root) << endl;
    delete_tree(root);

    _CrtDumpMemoryLeaks();

    system("pause");
    return 0;
}