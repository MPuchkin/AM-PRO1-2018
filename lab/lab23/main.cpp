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
    test_full_lab23();
    
	cout << "������� 10 ��������: " << endl;
    tree *root = test_tree({ 1,2,3,4,5,6,7 }); 
    print_tree(root);
    cout << "���������� �������: " << leaves_count(root) << endl;
    //delete_tree(root);

    _CrtDumpMemoryLeaks();

    system("pause");
    return 0;
}