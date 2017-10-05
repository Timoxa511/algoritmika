// 5)  135798642
#include "TXLib.h"

void fillarraywiththeorder (int ar [], size_t sz);

int main()
    {
    txCreateWindow (800, 600);
    int ar [12] = {};
    fillarraywiththeorder (ar, 12);

    $(ar);


    return 0;
    }


//-----------------------------------------------------------------------------
void fillarraywiththeorder (int ar [], size_t sz)
    {
    assert (ar);
    int __i_itznotacounter_itzanobject = 1;
    #define __i  __i_itznotacounter_itzanobject
    for (; __i_itznotacounter_itzanobject <= sz; __i_itznotacounter_itzanobject++)
        {
        $( ((__i - 1)/2)*(__i%2) + (-__i/2 + sz)*((__i + 1)%2) );

        assert (0 <= ((__i - 1)/2)*(__i%2) + (-__i/2 + sz)*((__i + 1)%2) &&
                     ((__i - 1)/2)*(__i%2) + (-__i/2 + sz)*((__i + 1)%2) < sz);

        ar[$( ((__i - 1)/2)*(__i%2) + (-__i/2 + sz)*((__i + 1)%2) )] = __i;
        }

    }
