#include <iostream>
using namespace std;

long power(int x, unsigned n)
{
    // base condition
    if (n == 0)
    {
        return 1L;
    }

    if (n & 1)
    { // if `n` is odd
        return x * power(x, n / 2) * power(x, n / 2);
    }

    // otherwise, `n` is even
    return power(x, n / 2) * power(x, n / 2);
}

int main(void)
{
    int x = -2;
    unsigned n = 10;

    cout << "pow(" << x << ", " << n << ") = " << power(x, n);

    return 0;
}

/* long power(int x, unsigned n)
{
    // base condition
    if (n == 0)
    {
        return 1L;
    }

    if (n & 1)
    { // if `n` is odd
        return x * power(x, n / 2) * power(x, n / 2);
    }

    // otherwise, `n` is even
    return power(x, n / 2) * power(x, n / 2);
}

int main(void)
{
    int x = -2;
    unsigned n = 10;

    printf("pow(%d, %d) = %d", x, n, power(x, n));

    return 0;
} */