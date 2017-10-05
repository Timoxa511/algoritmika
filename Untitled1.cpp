
#include "TXLib.h"
template <typename T>
size_t find (T array[], size_t size, const T& value);
int main()
    {
    txCreateWindow (1500, 1050);
    $unittest(strlen("abc"), 3);
    $unittest(strlen("a\0bc"), 3);
    char array [666666] = {};
    char value = 0 ;

    $unittest (find (array, sizeof(array), value), 0);

    printf ("%u", find (array, sizeof(array), value)) ;


    return 0;
    }

template <typename T>
size_t find (T array[], size_t size, const T& value)
    {
    for (size_t i = 0; i < size; i++)
        {
        if (value == array[i])
            return i;
        }
    return size;
    }
