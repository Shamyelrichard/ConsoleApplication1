﻿#include <iostream>

double middle(int n, int m) {
    return ((n + m) / 2);
}

int max(int n, int m) {
    if (n > m) {
        return n;
    }
    return m;
}

int main()
{
    int n, m;
    std::cin >> n;
    std::cin >> m;
    std::cout << max(n, m);
}
