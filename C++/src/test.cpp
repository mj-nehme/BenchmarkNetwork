#include <iostream>
#include <iomanip>
#include <cstring>
#include "config.h"

int main()
{
    byte *buffer = new byte[MessageSize];
    memset(buffer, 0x41, MessageSize);

    for (int j = 0; j < MessageSize; j++)
    {
        std::cout << std::showbase << std::hex << std::setw(4) << (int)buffer[j] << " ";
    }

    std::cout << std::endl;

        std::cout <<&buffer <<  std::endl;
    return 0;
}