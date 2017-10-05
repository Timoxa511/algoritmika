
#include "TXLib.h"
void StoopidFill (int ar [], size_t arsize, size_t LofOr);              //1)123 123 123 123...
void PrintfArray (int array [], size_t size);                           //2)1232 1232 123...
void AnotherFillWDNofV (int ar [], size_t arsize, size_t LofOr, ...);   //3)123321 123321 123321...

int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2);

//-----------------------------------------------------------------------------

int main()
    {
    int ar [6] = {};
    AnotherFillWDNofV (ar, sizearr(ar), 1, 1);
    PrintfArray (ar, sizearr(ar));

    $unittest(compare2ars (ar, sizearr(ar), {1,1,1,1,1,1}), 1);

    //-----  ----------  --------

    int arr [10] = {};

    AnotherFillWDNofV (arr, sizearr(arr), 5, 1, 3, 5, 4, 2);
    PrintfArray (arr, sizearr(arr));

    $unittest(compare2ars (arr, sizearr(arr), {1, 3, 5, 4, 2, 1, 3, 5, 4, 2}), 1);
    }


//-----------------------------------------------------------------------------
void PrintfArray (int array [], size_t size)
    {
    assert (array);
    {
    $sy;

    for (size_t i = 0; i < size; i++)  printf ("%2d  ", i);

    }
    printf ("\n\n");

    for (size_t i = 0; i < size; i++) printf ("%2d  ", array[i]);
    printf ("\n\n");
    }

//-----------------------------------------------------------------------------

void StoopidFill (int ar [], size_t arsize, size_t LofOr)
    {
    assert (ar);
    assert (LofOr < arsize);

    if (rand() % 2)
        for (size_t i = LofOr; i < arsize; i++)
            {
            assert(i < arsize);
            assert(0 <= i - LofOr && i - LofOr < arsize);
            ar[i] = ar[i-LofOr];
            }
    else
        for (size_t i =0; i < arsize - LofOr; i++)
            {
            assert(i < arsize);
            assert(0 < i + LofOr && i + LofOr < arsize);
            ar[i+LofOr] = ar[i];
            }
    }



//-----------------------------------------------------------------------------
void AnotherFillWDNofV (int ar [], size_t arsize, size_t LofOr, ...)
    {
    assert (ar);
    assert (LofOr < arsize);

    va_list arg = NULL;
    va_start(arg, LofOr);
    for (size_t i = 0; i < LofOr; i++)
        {
        assert(i < LofOr);
        ar[i] = va_arg(arg, int);
        }
    va_end(arg);

    StoopidFill (ar, arsize, LofOr);



    }



//-----------------------------------------------------------------------------
int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2)
    {
    size_t sz2 = ar2.size();
    if (sz1 != sz2) return 0;

    size_t i = 0;
    for (auto input : ar2)
        {
        if (ar1[i] != input) return 0;

        i++;
        }
    return 1;
    }

//-----------------------------------------------------------------------------












