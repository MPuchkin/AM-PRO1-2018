#include <iostream>

using namespace std;

typedef unsigned int uint;

// ����� ����� � ��������� ����� �������.
// ������� ��� ��������.
void print_spaces_flat(uint number)
{
    do {
        cout << number % 10 << " ";
        number /= 10;
    } while (number != 0);
}

// ����� ����� � ��������� ����� �������.
// ����������� �������.
void print_spaces(uint number) 
{
    // ������� ������� �����
    int remainder = number / 10;
    
	if(remainder != 0) // ���� ���� ������� ������� 
        // ��������� ��������
		print_spaces(remainder);

	// ����� ���������� �� ����������� ��������
    cout << number % 10 << " ";
}


int main(int argc, char **argv)
{
	setlocale(LC_ALL,"Russian");
	system("chcp 1251");

	uint number;
	cout << "������� ����� ����� : ";
	cin >> number;

    cout << "������ ����� � ���� ���� � ��������� � �������� ������� :";
    print_spaces_flat(number);
    cout << endl;

	cout << "������ ����� � ���� ���� � ��������� :";
	print_spaces(number);

	

	cout << endl;
	
    system("pause");
	return 0;
}
