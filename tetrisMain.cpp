#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


static void screen(int x, int y) {
    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            cout << "0";
        }
            cout << endl;
    }
}

int main() {
    int x=10, y=15;
    screen(x, y);
    return 0;
}

