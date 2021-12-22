#include <bits/stdc++.h>

int main(void)
{
    char start[3];
    char end[3];

    std::cin >> start >> end;

    int col, row;
    row = end[0] - start[0];
    col = end[1] - start[1];

    std::cout << std::max(abs(row), abs(col)) << '\n';
    while (col != 0 || row != 0)
    {
        if (row < 0)
        {
            row++;
            std::cout << 'L';    
            
        }
        else if (row > 0)
        {
            row--;
            std::cout << 'R';    
        }
        if (col < 0)
        {
            col++;
            std::cout << 'D';    
        }
        else if (col > 0)
        {
            col--;
            std::cout << 'U';    
        }
        std::cout << '\n';
    }
}