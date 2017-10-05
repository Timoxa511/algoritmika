#include "TXLib.h"
//123212321
void FillThisShit  (char array [], size_t size);
void FillThatShit  (char array [], size_t size);
void FillThatShit3 (char array [], size_t size);
void FillThatShit4 (char array [], size_t size, int strt, int vl, int stp);
void FillThatShit5 (char array [], size_t size, int i = 0);
void PrintfArray   (char array [], size_t size);

//-----------------------------------------------------------------------------

int main()
    {


    txCreateWindow (1500, 1050);

    char array [30] = {};


    Fill (array, sizearr(array));

    PrintfArray  (array, sizearr(array));

    }


//-----------------------------------------------------------------------------

void Fill (char array [], size_t size)
    {
    assert (array);



    for (size_t t = 0; t < size; t++)
        {
        assert (t < size);
        array [t] = t%3 + 1;
        }

    for (size_t t = 0; t < size; t--)
        {
        assert (t < size);
        array [t] = t%3 + 1;
        }
    }

//-----------------------------------------------------------------------------

void Fill (char array [], size_t size)
    {
    assert (array);



    for (size_t t = 0; t < size; t++)
        {
        assert (t < size);
        array [t] = t%3 + 1;
        }

    for (size_t t = 0; t < size; t--)
        {
        assert (t < size);
        array [t] = t%3 + 1;
        }
    }


//-----------------------------------------------------------------------------

void PrintfArray (char array [], size_t size)
    {
    assert (array);
    {
    $sy;

    for (size_t i = 0; i < size; i++)  printf ("%2d  ", i);

    }
    printf ("\n\n");

    for (size_t i = 0; i < size; i++) printf ("%2d  ", array[i]);
    }


