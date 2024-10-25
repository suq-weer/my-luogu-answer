#include <iostream>

int main()
{
    int apple[10];
    int height;
    for (int i = 0; i < 10; i++) {
        std::cin >> apple[i];
    }
    std::cin >> height;
    int count = 0;
    for (int b = 0; b < 10; b++) {
        if (apple[b] <= height + 30) {
            count = count + 1;
        }
    }
    std::cout << count;
    return 0;
}
