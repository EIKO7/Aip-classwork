#ifndef INTMATRIX_H
#define INTMATRIX_H

#include <cstddef>
#include <iostream>

struct IntMatrix
{
    IntMatrix(size_t r, size_t c);
    ~IntMatrix();

    IntMatrix(const IntMatrix& rhs);
    IntMatrix& operator=(const IntMatrix& rhs);

    void addRow(size_t afterRow, int value);
    void addCol(size_t afterCol, int value);
    void print() const;

    int** data;
    size_t rows;
    size_t cols;
};

#endif
