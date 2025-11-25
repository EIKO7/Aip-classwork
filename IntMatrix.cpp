#include "IntMatrix.h"

IntMatrix::IntMatrix(size_t r, size_t c): rows(r), cols(c)
{
    data = new int* [rows];
    for (size_t i = 0; i < rows; ++i)
    {
        data[i] = new int[cols];
    }
}

IntMatrix::~IntMatrix()
{
    for (size_t i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;
}

IntMatrix::IntMatrix(const IntMatrix& rhs): rows(rhs.rows), cols(rhs.cols)
{
    data = new int* [rows];
    for (size_t i = 0; i < rows; ++i)
    {
        data[i] = new int[cols];
        for (size_t j = 0; j < cols; ++j)
            data[i][j] = rhs.data[i][j];
    }
}

IntMatrix& IntMatrix::operator=(const IntMatrix& rhs)
{
    for (size_t i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;

    rows = rhs.rows;
    cols = rhs.cols;

    data = new int* [rows];
    for (size_t i = 0; i < rows; ++i)
    {
        data[i] = new int[cols];
        for (size_t j = 0; j < cols; ++j)
            data[i][j] = rhs.data[i][j];
    }

    return *this;
}

void IntMatrix::addRow(size_t afterRow, int value)
{
    size_t insertPos = afterRow;
    if (afterRow > 0)
        insertPos = afterRow;

    int** newData = new int* [rows + 1];
    for (size_t i = 0; i < rows + 1; ++i)
        newData[i] = new int[cols];

    for (size_t i = 0; i < insertPos; ++i)
        for (size_t j = 0; j < cols; ++j)
            newData[i][j] = data[i][j];

    for (size_t j = 0; j < cols; ++j)
        newData[insertPos][j] = value;

    for (size_t i = insertPos; i < rows; ++i)
        for (size_t j = 0; j < cols; ++j)
            newData[i + 1][j] = data[i][j];

    for (size_t i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;

    data = newData;
    rows++;
}

void IntMatrix::addCol(size_t afterCol, int value)
{
    size_t insertPos = afterCol;
    if (afterCol > 0)
        insertPos = afterCol;

    int** newData = new int* [rows];
    for (size_t i = 0; i < rows; ++i)
        newData[i] = new int[cols + 1];

    for (size_t i = 0; i < rows; ++i)
        for (size_t j = 0; j < insertPos; ++j)
            newData[i][j] = data[i][j];

    for (size_t i = 0; i < rows; ++i)
        newData[i][insertPos] = value;

    for (size_t i = 0; i < rows; ++i)
        for (size_t j = insertPos; j < cols; ++j)
            newData[i][j + 1] = data[i][j];

    for (size_t i = 0; i < rows; ++i)
        delete[] data[i];
    delete[] data;

    data = newData;
    cols++;
}

void IntMatrix::print() const
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            std::cout << data[i][j];
            if (j + 1 < cols) std::cout << " ";
        }
        std::cout << "\n";
    }
}
