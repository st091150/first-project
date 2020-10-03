
#include <iostream>

int main()
{
    int a, b;
    do { std::cout << "Rows: "; std::cin >> a; } while (a < 1);
    do { std::cout << "Columns: "; std::cin >> b; } while (b < 1);

    int** M = new int* [a];
    for (int i = 0; i < a; ++i)
        M[i] = new int[b];

    int p = 0;

    for (int k = 0; k <= a - 1; ++k) {
        for (int j = 0; j <= b - 1; ++j) {
            M[k][j] = p;
            ++p;
        }
        std::cout << std::endl;
    }

    for (int k = 0; k <= a - 1; k++) {
        for (int j = 0; j <= b - 1; j++) {
            std::cout << M[k][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < a; ++i)
        delete[] M[i];

    delete M;

}


