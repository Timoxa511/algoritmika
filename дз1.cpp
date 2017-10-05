#include "TXLib.h"

void FillThisShit  (char array [], size_t size);
void FillThatShit  (char array [], size_t size);
void FillThatShit3 (char array [], size_t size);
void FillThatShit4 (char array [], size_t size, int strt, int vl, int stp);
void FillThatShit5 (char array [], size_t size, int i = 0);
void PrintfArray   (char array [], size_t size);
int main()
    {


    txCreateWindow (1500, 1050);

    char array [30] = {};

    //FillThatShit4 (array, sizearr(array), 0 , 1, 3);
    //FillThatShit4 (array, sizearr(array), 1 , 2, 3);
    //FillThatShit4 (array, sizearr(array), 2 , 3, 3);

    FillThatShit5 (array, sizearr(array));

    PrintfArray  (array, sizearr(array));

    }


void FillThisShit (char array [], size_t size)
    {
    assert (array);

    for (size_t t = 0; t < size; t++)
        {
        assert (t < size);
        array [t] = t%3 + 1;
        }
    }

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



void FillThatShit (char array [], size_t size)
    {
    assert (array);
    array[0] = 1;
    for (size_t t = 0; t < size-1; t++)
        {
        assert (t < size);
        assert (t+1 < size);
             if (array[t] == 1) array[t+1] = 2;
        else if (array[t] == 2) array[t+1] = 3;
        else if (array[t] == 3) array[t+1] = 1;
        else assert(0);
        }
    }


void FillThatShit3 (char array [], size_t size)
    {
    assert (array);

    for (size_t t = 0; t < size-1; t++)
        array[t] = 10;

    array[0] = 1;

    for (size_t t = 1; t < size; t++)
        {
        assert (t < size);
        assert (t-1 < size);
             if (array[t-1] == 1) array[t] = 2;
        else if (array[t-1] == 2) array[t] = 3;
        else if (array[t-1] == 3) array[t] = 1;
        else assert(0);
        }

    }




void FillThatShit4 (char array [], size_t size, int strt, int vl, int stp)
    {
    assert (array);

    for (size_t t = strt; t < size; t += stp)
        {
        assert (t < size);
        array [t] = vl;
        }

    }


void FillThatShit5 (char array [], size_t size, int i)
    {
    assert (array);

    if (i >= size) return;

    array [i] = i%3 + 1;

    FillThatShit5 (array, size, i + 1);

    assert (i < size);
    }

