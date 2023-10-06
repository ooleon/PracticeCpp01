#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

template <typename... Args>
auto sum(Args &&...args)
{
    return (args + ... + 0);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << sum(1, 2, 5, 23, 8);
    return 0;
}
