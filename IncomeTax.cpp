#include <iostream>

int main(int argc, char const *argv[])
{
    int count;
    std::cin >> count;
    for (int i = 0; i < count; i++)
    {
        double x;
        std::cin >> x;
        if (x <= 11000)
        {
            x *= .1;
        }
        else if (x <= 44725)
        {
            x *= .12;
        }
        else if (x <= 95375)
        {
            x *= .22;
        }
        else if (x <= 182100)
        {
            x *= .24;
        }
        else if (x <= 231250)
        {
            x *= .32;
        }
        else if (x <= 578125)
        {
            x *= .35;
        }
        else
        {
            x *= .37;
        }
        std::cout << (int) floor(x + 0.5) << std::endl;
    }
    return 0;
}
