#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <array>
#include <math.h>

using namespace std;

int main()
{
    int num;
    int i = 0;
    string s = " + i + ";
    do
    {
        s = to_string(i);
        std::cout << s;
        i++;
    } while (i <= 5);
    std::cout << "\n";

    std::cout << "Welcome exkalybur Yes!  \n";
    std::cout << "\n";
    return 0;
}