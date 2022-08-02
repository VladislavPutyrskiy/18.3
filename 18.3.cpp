#include <iostream>
int n;
int k;

int rabbit_stairjumper(int n, int k)
{
    int c = 0;
    if (n < 0) return 0;
    if (n == 0) return 1;
    for (int i = 1; i <= k; i++)
    {
      c+=rabbit_stairjumper(n - i, k);
    }
    return c;
}

int main()
{   
    std::cout << "input the number of stairs";
    std::cin >> n;
    std::cout << " and the number of them in 1 jump";
    std::cin >> k;
    std::cout << rabbit_stairjumper(n, k);
}