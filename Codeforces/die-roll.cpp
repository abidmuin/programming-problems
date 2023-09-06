// https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>

int gcd(int a, int b)
{
    while (b)
    {
        a = a % b;
        std::swap(a, b);
    }
    return a;
}

int main()
{
    int y, w;
    std::cin >> y >> w;

    int favorable_outcomes = 0;

    for (int dot_roll = std::max(y, w); dot_roll <= 6; ++dot_roll)
    {
        favorable_outcomes += 6 - dot_roll + 1;
    }

    int total_outcomes = 6 * 6;
    int gcd_value = gcd(favorable_outcomes, total_outcomes);

    std::cout << favorable_outcomes / gcd_value << '/' << total_outcomes / gcd_value << std::endl;

    return 0;
}
