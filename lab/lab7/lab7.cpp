//
// ������������ ������� �7. �������, ��������� ��������.
// lab7.cpp
//
#include <assert.h>
#include <iostream>
#include "lab7.h"

using namespace std;

void read(int a[], int &n)
{
    cout<<"������� N<"<<max_N<<endl;
    do {
        cin >> n;
    } while (n < 1 || n >= max_N);

    cout << "������� " << n << " ��������" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void print(const int a[], int n)
{
    assert(n>0 && n<max_N);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int first_zero(const int a[], int n)
{
    assert(n>0 && n<max_N);

    // ����� ����
    int i = 0;
    while (a[i] != 0 && i<n)
        i++;

    if (i == n)  // ��� ����
        return -1;
    return i;
}

int product_positive_after_zero(const int a[], int n)
{
    assert(n>0 && n<max_N);

    int i = first_zero(a, n);
    if ( i==-1 )  // ��� ����
        return 0;

    int prod = 1;
    bool pos = false;  // ���� - ������� �������������� ��������

    while ( i<n ) {
        if( a[i]>0 ) {
            prod *= a[i];
            pos = true;
        }
        i++;
    }

    if ( pos ) 
        return prod;
    return 0;
}