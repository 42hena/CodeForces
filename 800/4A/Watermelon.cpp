#include <iostream>

int main(void)
{
    int w;
    std::cin >> w;

    if (w % 2 == 0 && w > 2)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

/*
처음에 w가 2로 나눠지기만 하면 될줄 알았으나 2의 경우 1과 1로 나누어져 불가능하다.
*/