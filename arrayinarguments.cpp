
#include "TXLib.h"

//-----------------------------------------------------------------------------
int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2);
void _lkijuhgyhnmk(size_t pazmer, int massive []);
//-----------------------------------------------------------------------------

int main()
    {
    int gjogjja [7] = {1,3,5,7,6,4,2};
    _lkijuhgyhnmk(7, gjogjja);
    int res = compare2ars (gjogjja, sizearr(gjogjja), {1+1,3+1,5+1,7+1,6+1,4+1,2+1});
    $unittest(res, 1);
    $(res);
    return 0;
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
void _lkijuhgyhnmk(size_t pazmer, int massive [])

    {
    for (int i = 0; i < pazmer; i++)
        {
        massive[i]+=1;

        }
    }










