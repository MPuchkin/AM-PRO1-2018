//
// ������������ ������ �11. ������������ �������. ��������� ������.
// lab11.cpp
//
#include <cassert>
#include <climits>
#include <iostream>
#include <iomanip>
#include "crtdynmem.h"
#include "lab11.h"

using namespace std;

void read_new(double** &m, uint &rows, uint &cols)
{
	assert(m == nullptr);
	cout << "������� ���������� ����� " << endl;
	cin >> rows;
	cout << "������� ���������� �������� " << endl;
	cin >> cols;

	// �������� ������ ����������
	m = new double*[rows];

	cout << "������� " << rows*cols << " ���������" << endl;
	for (uint i = 0; i < rows; ++i) {
		// �������� ������ ��� ������ ������ ��������
		m[i] = new double[cols];
		for (uint j = 0; j < cols; ++j)
			cin >> m[i][j];
	}
}

void delete_matrix(double **& m, const uint rows, const uint cols)
{
	assert(m != nullptr);

	// ����������� ������ ���������� ��������
	for (uint i = 0; i < rows; ++i)
		delete[] m[i];

	// ����������� ������ ���������� �������� �����
	delete[] m;
	// �������� ���������
	m = nullptr;
}

void print(double const*const* m, const uint rows, const uint cols)
{
	assert(m != nullptr);

	for (uint i = 0; i < rows; ++i) {
		for (uint j = 0; j < cols; ++j) {
			cout << setw(cout.precision() * 2 + 1);
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

double min_positive(const double *a, const uint size)
{
	assert(a != nullptr);

	double min = DBL_MAX;
	for (uint i = 0; i < size; ++i)
		if (a[i] > 0 && a[i] < min)
			min = a[i];
	if (min == DBL_MAX) // �������� �� ����������
		throw "��� ������������� ��������� � �������";
	return min;
}

double min_positive(double const* const* m, const uint rows, const uint cols)
{
	assert(m != nullptr);
	double min = DBL_MAX;
	for (uint i = 0; i < rows; ++i)
	{
		double row_min = min_positive(m[i], cols);
		if (row_min < min) min = row_min;
	}
	if (min == DBL_MAX) // �������� �� ����������
		throw "��� ������������� ��������� � �������";
	return min;
}