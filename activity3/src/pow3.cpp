#include <iostream>
using namespace std;

long power(int x, unsigned n)
{
    // base condition
    if (n == 0) {
        return 1L;
    }
 
    // calculate subproblem recursively
    int pow = power(x, n / 2);
 
    if (n & 1) { // if `y` is odd
        return x * pow * pow;
    }
 
    // otherwise, `y` is even
    return pow * pow;
}
 
int main(void)
{
    int x = -2;
    unsigned n = 10;
 
    cout << "pow(" << x << ", " << n << ") = " << power(x, n) << endl;
 
    return 0;
}