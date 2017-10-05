#include "TXLib.h"
void StoopidFill (int ar [], size_t arsize, size_t LofOr);                  //1)123 123 123 123...
void AnotherFillWDNofV (int ar [], size_t arsize, size_t LofOr, ...);       //2)1232 1232 123...
void fillar (int ar [], size_t sz, std::initializer_list<int> order);       //3)123321 123321 123321...

void PrintfArray (int array [], size_t size);
int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2);

int fillfuncutest (void (*arfillingfunc) (int ar[], size_t sz, std::initializer_list<int> order));
std::vector<int> bundle_of_FFUT (void (*arfillingfunc) (int ar[], size_t sz, std::initializer_list<int> order), ...);
//-----------------------------------------------------------------------------

int main()
    {


    //-----------------------------------------------------------------------------
    for (auto& res : bundle_of_FFUT (fillar,fillar,fillar, NULL)    )
        printf ("%d", res);
    }


//-----------------------------------------------------------------------------
std::vector<int> bundle_of_FFUT (void (*arfillingfunc) (int ar[], size_t sz, std::initializer_list<int> order), ...)
    {

    va_list arg = NULL;
    va_start(arg, arfillingfunc);
    std::vector<int> resltz;

    typedef void arfillingfunc_t (int ar[], size_t sz, std::initializer_list<int> order);

    for (arfillingfunc_t* cur = arfillingfunc; cur ; cur = va_arg(arg, arfillingfunc_t*)  )
        {
        resltz.push_back(fillfuncutest (cur));
        }

    va_end(arg);

    return resltz;
    }
//-----------------------------------------------------------------------------
int fillfuncutest (void (*arfillingfunc) (int ar[], size_t sz, std::initializer_list<int> order))
    {
    int arr [5] = {};
    arfillingfunc         (arr, sizearr(arr), {11,22,33,44,55,66,77,88,99,88,77,66,55,44,33,22});
    if (!$unittest(compare2ars (arr, sizearr(arr), {11,22,33,44,55}), 1))   return 0;

    //><><><><><><><><>

    int arr2 [30] = {};
    arfillingfunc         (arr2, sizearr(arr2), {1,2,3,4,5});
    if (!$unittest(compare2ars (arr2, sizearr(arr2), {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5}), 1)) return 0;

    //><><><><><><><><>

    int arr3 [10] = {};
    arfillingfunc         (arr3, sizearr(arr3), {1,2,3,4,5,5,4,3,2,1});
    if (!$unittest(compare2ars (arr3, sizearr(arr3), {1,2,3,4,5,5,4,3,2,1}), 1))   return 0;

    //><><><><><><><><>

    int arr4 [1] = {};
    arfillingfunc         (arr4, sizearr(arr4), {666});
    if (!$unittest(compare2ars (arr4, sizearr(arr4), {666}), 1))   return 0;

    //><><><><><><><><>

    int arr5 [10] = {1,2,3,1,2,3,1,2,3,1};
    arfillingfunc         (arr5, sizearr(arr5), {});
    if (!$unittest(compare2ars (arr5, sizearr(arr5), {1,2,3,1,2,3,1,2,3,1}), 1))   return 0;

    $n;

    return 1;
    }

//-----------------------------------------------------------------------------
//{  diffillz
//-----------------------------------------------------------------------------
void fillar (int ar [], size_t sz, std::initializer_list<int> order)
    {
    assert(ar);

    size_t osz = order.size();

    size_t minsz = (sz < osz)? sz : osz;

    auto curefor = order.begin();
    for (size_t i = 0; i < minsz; i++, curefor++)
        {
        assert(i < minsz);
        ar[i] = *curefor;
        }

    if (sz <= osz) return;

    for (size_t i = osz; i < sz; i++)
        {
        assert(i < sz);
        assert(0 <= i - osz && i - osz < sz);

        ar[i] = ar[i-osz];
        }

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
//}
//-----------------------------------------------------------------------------



//-----------------------------------------------------------------------------
//{    compare2 & prntf
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

//}
//-----------------------------------------------------------------------------












