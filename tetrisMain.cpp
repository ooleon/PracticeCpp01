#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <array>
using namespace std;

const int x = 10, y = 15;
int filaArray[y];
int columnaArray[x];

static void plano()
{
    for (size_t i = 0; i < y; i++)
    {
        filaArray[i] = 1;
    }
    for (size_t i = 0; i < x; i++)
    {
        columnaArray[i] = 1;
    }
    for (size_t i = 0; i < y; i++)
    {
        cout << ( filaArray[i]) << endl;
    }
    // cout << "paso";
}


static void screen(int x, int y)
{
    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            cout << "0";
        }
        cout << endl;
    }
}

static void move_piece(int x, int y)
{
    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            cout << "0";
        }
        cout << endl;
    }
}

int main()
{

    filaArray[5] = 0;
    plano();
    // screen(x, y);
    return 0;
}
