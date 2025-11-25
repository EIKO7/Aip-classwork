#include <iostream>
#include "IntMatrix.h"

int main()
{
    size_t r, c;
    std::cin >> r >> c;

    IntMatrix mat(r, c);

    for (size_t i = 0; i < r; ++i)
        for (size_t j = 0; j < c; ++j)
            std::cin >> mat.data[i][j];

    mat.print();
    std::cout << "\n";

    int cmd, p, v;
    while (std::cin >> cmd >> p >> v)
    {
        if (cmd == 1)
        {
            mat.addRow(p, v);
        }
        else if (cmd == 2)
        {
            mat.addCol(p, v);
        }

        mat.print();
        std::cout << "\n";
    }

    return 0;
}
