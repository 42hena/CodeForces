#include <iostream>
// #include <algorithm>
int main(void)
{
    int y, w, d;
    int max;
    std::cin >> y >> w;

    max = std::max(y, w);

    if ( 6 % (7 - max) == 0)
        std::cout << 1 << "/" << 6 / (6 - max + 1) << "\n";
    else
        if ((7 - max) == 4)
            std::cout << (7 - max) / 2 << "/" << 3 << "\n";
        else
            std::cout << 7 - max << "/" << 6 << "\n";
}