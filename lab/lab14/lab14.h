﻿//
// Лабораторная работа №14. Текстовые файлы. Обработка чисел
// lab14.h
//
#pragma once
#include <iostream>

typedef unsigned int uint;

// Функция чтения массива целых чисел из текстового файла с заданным именем.
// Ожидаемый формат файла:
// n
// a1  a2  a3  a4 ... an
// Входные параметры:
//      fname - имя файла.
// Выходные параметры:
//      a - указатель на начало массива;
//      n - количество элементов в массиве.
// Если в файле оказывается меньше элементов, чем указанно,
// генерируется исключение char*.
void read_from_text(const char* fname, int *&a, uint &n);

// Вывод массива в указанное место
// Параметры:
//     os – поток вывода,
//     a - указатель на начало массива;
//     n - количество элементов в массиве.
void print_to_stream(std::ostream &os, const int *a, uint n);