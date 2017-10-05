//13579...8642
#include "TXLib.h"

void fillfstp (int ar [], size_t sz);
void curcasefillscndprt (int ar [], size_t sz, int difbetween2prts);
void spclfill (int ar [], size_t sz);
int compare2ars (int ar1 [], size_t sz1, std::initializer_list<int> ar2);
int utest (void (*fillfunc_p) (int ar [], size_t sz));
//-----------------------------------------------------------------------------

int main()
    {

    int ar [12] = {};

    $(utest ( spclfill ));


    return 0;
    }



//-----------------------------------------------------------------------------
int utest (void (*fillfunc_p) (int ar [], size_t sz))
    {
    int ar [12] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    fillfunc_p (ar, 12);

    $unittest(compare2ars (ar, sizearr(ar), {1,2,3,7,8,9,12,11,10,6,5,4}), 1);
    $(ar);
    //-----------------------------------------------------------------------------

    int ar2 [22] = {};
    fillfunc_p (ar2, sizearr(ar2));

    $unittest(compare2ars (ar2, sizearr(ar2), {1,2,3, 7,8,9, 13,14,15, 19,20,21, 22, 18,17,16, 12,11,10, 6,5,4}), 1);
    $(ar2);

    //-----------------------------------------------------------------------------

    int ar3 [6] = {};
    fillfunc_p (ar3, sizearr(ar3));

    $unittest(compare2ars (ar3, sizearr(ar3), {1,2,3,6,5,4}), 1);
    $(ar3);

    //-----------------------------------------------------------------------------

    int ar4 [1] = {};
    fillfunc_p (ar4, 1);

    $unittest(compare2ars (ar4, sizearr(ar4), {1}), 1);
    $(ar4);

    //-----------------------------------------------------------------------------

    int ar5 [17] = {};
    fillfunc_p (ar5, sizearr(ar5));

    $unittest(compare2ars (ar5, sizearr(ar5), {1,2,3, 7,8,9, 13,14,15, 17,16, 12,11,10, 6,5,4}), 1);
    $(ar5);

    //-----------------------------------------------------------------------------

    int ar6 [20] = {};
    fillfunc_p (ar6, sizearr(ar6));

    $unittest(compare2ars (ar6, sizearr(ar6), {1,2,3, 7,8,9, 13,14,15, 19,20, 18,17,16, 12,11,10, 6,5,4}), 1);
    $(ar6);











    }

//-----------------------------------------------------------------------------
void spclfill (int ar [], size_t sz)
    {
    assert (ar);
    fillfstp (ar, (sz > 3)? sz/2 : sz);
    curcasefillscndprt (ar, sz, 3);
    if (sz%3 == 1 && sz > 1)  ar[sz/2] = ar[sz/2-1]+1;
    if (sz%3 == 2 && sz > 1 && !(((sz/2)/3)%3)) ar[sz/2] = ar[sz/2-1]+1;
    }



//-----------------------------------------------------------------------------
void fillfstp (int ar [], size_t halfsz)
    {
    ar[0] = 1;
    int step = 1;
    for (size_t i = 1; i <= halfsz; i++)
        {
        assert (0 < i    &&   i <= halfsz);
        assert (0 <= i-1 && i-1 < halfsz);

        ar[i] = ar[i-1] + step;

        step = 1;
        if ((i-2)%3 == 0 && i>1) step += 3;

        }

    }

//-----------------------------------------------------------------------------
void curcasefillscndprt (int ar [], size_t sz, int difbetween2prts)
    {
    if (sz <= 3) return;

    for (size_t rd = 0, wrt = sz-1; rd < wrt; wrt--, rd++)
        {
        assert ($(rd) < $(wrt));
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

