//13579...8642
#include "TXLib.h"

void fill_progression (int ar [], size_t sz, int fst, int step);
void curcasefillscndprt (int ar [], size_t sz, int difbetween2prts);
void spclfill (int ar [], size_t sz);
int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2);
int utest (void (*fillfunc_p) (int ar [], size_t sz));
//-----------------------------------------------------------------------------

int main()
    {
    txCreateWindow (800, 600);

    int ar [12] = {};

    $(utest ( spclfill ));


    return 0;
    }



//-----------------------------------------------------------------------------
int utest (void (*fillfunc_p) (int ar [], size_t sz))
    {
    int ar [12] = {};
    fillfunc_p (ar, 12);

    $unittest(compare2ars (ar, sizearr(ar), {1,3,5,7,9,11,12,10,8,6,4,2}), 1);
    $(ar);
    //-----------------------------------------------------------------------------

    int ar2 [11] = {};
    fillfunc_p (ar2, 11);

    $unittest(compare2ars (ar2, sizearr(ar2), {1,3,5,7,9,11,10,8,6,4,2}), 1);
    $(ar2);

    //-----------------------------------------------------------------------------

    int ar3 [2] = {};
    fillfunc_p (ar3, 2);

    $unittest(compare2ars (ar3, sizearr(ar3), {1,2}), 1);
    $(ar3);

    //-----------------------------------------------------------------------------

    int ar4 [1] = {};
    fillfunc_p (ar4, 1);

    $unittest(compare2ars (ar4, sizearr(ar4), {1}), 1);
    $(ar4);
    }


//-----------------------------------------------------------------------------
void spclfill (int ar [], size_t sz)
    {
    fill_progression (ar, (!(sz%2))? sz/2 : sz/2+1, 1, 2);
    curcasefillscndprt (ar, sz, 1);
    }



//-----------------------------------------------------------------------------
void fill_progression (int ar [], size_t sz, int fst, int step)
    {
    assert (ar);

    ar[0] = fst;
    for (size_t i = 1; i < sz; i++)
        {
        assert (1 <= i && i < sz);
        assert (0 <= i-1 && i-1 < sz);

        ar[i] = ar[i-1] + step;
        }
                                                                                                //$unittest(compare2ars (ar, sizearr(ar), {1,1,1,1,1,1}), 1);
    }

//-----------------------------------------------------------------------------
void curcasefillscndprt (int ar [], size_t sz, int difbetween2prts)
    {
    assert (ar);

    for (size_t rd = 0, wrt = sz-1; rd < wrt; wrt--, rd++)
        {
        assert (rd < wrt);
        assert (0 <= rd  && rd  < sz);
        assert (0 <= wrt && wrt < sz);

        ar[wrt] = ar[rd] + difbetween2prts;
        }

    }


//-----------------------------------------------------------------------------


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

