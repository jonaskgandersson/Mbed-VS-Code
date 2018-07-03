#include "mbed.h"

#include "config.h"

int count = 0;
main()
{
    while (true)
    {
        func();
        printf("Hello World nr: %d\r\n", ++count);
    }
}