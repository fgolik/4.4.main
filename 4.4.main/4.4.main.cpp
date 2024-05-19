#include "Vector.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    Vector X(5), Y(5);
    X.fillRandom();
    Y.fillRandom();

    Vector Z(5);
    Z.setElement(0, 1);
    for (int i = 1; i < 5; i++)
    {
        Z.setElement(i, X.getElement(i) * Y.getElement(i) - X.getElement(i - 1) * Y.getElement(i - 1));
    }

    Z.print();

    return 0;
}
