#ifndef INTARRAY_H
#define INTARRAY_H
#include <cstddef>

struct IntArray
{
    IntArray(int i);
    ~IntArray();

    IntArray(const IntArray& rhs);
    IntArray& operator=(const IntArray& rhs);

    IntArray(IntArray&& rhs);
    IntArray& operator=(IntArray&& rhs);

    int add(int i);
    int get(size_t id) const noexcept;
    size_t getsize() const noexcept;
    int last() const noexcept;

    int* a;
    size_t k;
};

#endif
