#include <iostream>
#include <cstdlib>
#include <ctime>

#define ALPHABET_LENGTH 75

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789/+~^-_=*!@#$%&";

int main(int argc, const char* argv[])
{
        unsigned len = 10;
        if (argc == 2)
                len = atoi(argv[1]);

        srand(time(0));

        for (unsigned i = 0; i < len; ++i)
                std::cout << alphabet[(rand() % ALPHABET_LENGTH) + 1];
        std::cout << std::endl;

        return 0;
}
