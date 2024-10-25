#include <iostream>

int main()
{
    int a;
    int b = 0;
    std::cin >> a;
    double c = 0.0;
    for (int i = 1; ; i = i + 1)
    {
        if (i == 1)
        {
            c = c + 1.0;
        }
        else
        {
            c = c + (1.0 / i);
        }
        if (c > a) 
        {
            b = i;
            break;
        }
    }
    std::cout << b;
    return 0;
}
