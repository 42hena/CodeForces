#include <bits/stdc++.h>

int main(void)
{
    double n, m, a;

    std::cin >> n >> m >> a;
    // printf("%lld", std::ceil(n/a) * std::ceil(m/a));
    std::cout << (long long)std::ceil(n/a) * (long long)std::ceil(m/a);

    return 0;
}
// 연산 방법 강구해보기