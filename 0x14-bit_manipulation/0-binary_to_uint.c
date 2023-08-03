#include "main.h"

/**
 * binary_to_uint - Changes binary to unsigned int.
 * @b:char param.
 * Return: 0.
 */
unsigned int binary_to_uint(const char *b)
{
        int m;
        unsigned int mole = 0;

        if (!b)
                return (0);

        for (m = 0; b[m]; m++)
        {
                if (b[m] < '0' || b[m] > '1')
                        return (0);
                mole = 2 * mole + (b[m] - '0');
        }

        return (mole);
}
