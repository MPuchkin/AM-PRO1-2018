//
// ������������ ������ �6. ������������ �������.
// crtdynmem.h
// �������� ������ ������ ��� ������ ���������� crtdbg
//
// ���� ���� ���������� ���������� �� ������ ������� �����, 
// ����������� ��������� ������ ���������� new.
#pragma once

#include <crtdbg.h> // ���������� ��� ������������ �������� ��������� ������


#ifndef DBG_NEW // ������ ��� ��������� ��������� new
// ��������� ���� � ������, ��� ��� ������ �������� new
    #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )      
    #define new DBG_NEW  
#endif /* DBG_NEW */