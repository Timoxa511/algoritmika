
#include "TXLib.h"
struct stats
    {
    int swaps = 0;
    int compaz = 0;
    };

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void rfa (int ar [], size_t sz);
void Archy$ (int ar [], size_t sz, int LeftEdge = -666, int RightEdge = -666, int CurrentCell = -666,
char between_edges_color = ' ', char outOf_edges_color = ' ');

void zavicimost_stats_oT_arsz (int csz);
void Grafek (int crrsz, int swps, int compaz);


void bubble_sortir(int ar[], size_t sz);
stats super_bubble_sortir(int ar[], size_t sz);

void sort_vstavkoy (int ar[], size_t sz);
int findTheRightPlaceForTheIntInArrayAndPlaceTheIntInThisPlace (int arn, int crnt, int ar[], size_t sz);
int find2 (int ar[], size_t sz, int tofind)  ;
void Zdvig (int ar [], size_t sz);

int main()
    {
    //txCreateWindow (1600, 900);

    int licaped [12] = {};

    rfa (licaped, sizearr(licaped));
    //$(licaped);
    //$n;$n;
    //super_bubble_sortir(licaped, sizearr(licaped)) ;
    //printf ("stats: swaps [%d], compaz [%d]", hariton.swaps, hariton.compaz);
    //$(licaped);

    //zavicimost_stats_oT_arsz (150);

    sort_vstavkoy (licaped, sizearr(licaped));
    //find2 (licaped, sizearr(licaped), rand()%10000)  ;



    }

//-----------------------------------------------------------------------------
void bubble_sortir(int ar[], size_t sz)
    {
    //for (size_t j = 0; j < sz; j++)
        for (size_t i = 1; i <= sz; i++)
            {
            //Archy$ (ar , sz);
            //assert (0 < i && i < sz);
            //assert (0 <= i-1 && i-1 < sz);
            if (ar[i-1] > ar[i])
                {
                std::swap (ar[i-1], ar[i]);
                }

        }


    }

//-----------------------------------------------------------------------------
stats super_bubble_sortir(int ar[], size_t sz)
    {
    int end = sz;
    stats BaxTePwa;
    for (size_t j = 0; j < sz; j++)
        {
        int hope = 0;
        for (size_t i = 1; i < end; i++)
            {

            assert (0 < i && i < sz);
            assert (0 <= i-1 && i-1 < sz);
            BaxTePwa.compaz++ ;
            if (ar[i-1] > ar[i])
                {

                std::swap (ar[i-1], ar[i]);
                BaxTePwa.swaps++ ;
                hope++;
                }

            }
        //Archy$ (ar , sz); $n;
        if (!hope)
            {

            //printf("provedya_s4ekoyu_pooooooooooooooo");
            return BaxTePwa;

            }
        end--;
        }
    return BaxTePwa;
    }
//-----------------------------------------------------------------------------
void rfa (int ar [], size_t sz)
    {



    for (int i = 0; i < sz; i++)
        {
        ar[i] = rand()%100*100 + i;
        }
    }
                                           // sz*(sz-1)/2

//-----------------------------------------------------------------------------
void Archy$ (int ar [], size_t sz, int LeftEdge, int RightEdge, int CurrentCell, char between_edges_color, char outOf_edges_color)
    {
    if (between_edges_color != ' ')
        {
        switch (between_edges_color)
            {
            case 'd' :
                {
                break;
                }
            case 'b' :
                {
                break;
                }
    if (outOf_edges_color != ' ')
        {
        switch (outOf_edges_color)
            {
            case 'd' :
                {

                break;
                }
            case 'b' :
                {
                break;
                }

            $sd;
    $n;
    int defvar = (LeftEdge != -666 && RightEdge != -666 && CurrentCell != -666);
    for (size_t i = 0; i < sz; i++)
        {
        assert (0 <= i && i < sz);
        $sd;
        if (defvar)                                                                                     //"ar[%2d] = %5d", i,
            {
            if (LeftEdge <= i && i <= RightEdge) $b;
            if (i == CurrentCell)                $r;
            }
        else                                     $d;


        printf ("%5d ", (ar)? ar[i] : i);
        }
    if (ar) $nn;
    }

//-----------------------------------------------------------------------------

void zavicimost_stats_oT_arsz (int csz)
    {
    int bar [csz];
    for (int i = 0; i < csz; i++)
        {
        rfa (bar, i);
        stats bekon = super_bubble_sortir(bar, i);
        //printf ("sts[%3d]: sws[%3d] cms[%3d],  \n" , i, bekon.swaps, bekon.compaz);

        Grafek (i, bekon.swaps, bekon.compaz);
        }


    }


void Grafek (int crrsz, int swps, int compaz)
    {
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txCircle (crrsz, -swps + txGetExtentY(), 2);

    txSetColor(TX_LIGHTRED);
    txSetFillColor(TX_LIGHTRED);
    txCircle (crrsz, -compaz + txGetExtentY(), 2);



    }


//-----------------------------------------------------------------------------
/*void srt2 (int ar[], size_t sz)
    {
    std::vector<int> Alesha_paren(sz-1);

    iteratorr mid (ar[1], sz-1);

    Alesha_paren.push_back(mid);
    iteratorr stariy_lev__Tolstoy = mid;
    iteratorr stariy_prav_Tolstoy = mid;
    iteratorr lev__Tolstoy = mid;
    iteratorr prav_Tolstoy = mid;

    for(size_t i = 1; i < sz; i++)     //0 0 0 0 0 5 6 7 52 3 89 5 4 7
        {
        if (ar[i] < lev__Tolstoy) lev__Tolstoy = ar[i];
        if (ar[i] > prav_Tolstoy) prav_Tolstoy = ar[i];

        if (stariy_lev__Tolstoy != lev__Tolstoy)
            {
            Alesha_paren.push_back(lev__Tolstoy);

            stariy_lev__Tolstoy = lev__Tolstoy;
            }
        if (stariy_prav_Tolstoy != prav__Tolstoy)
            {
            Alesha_paren.push_back(prav_Tolstoy);
            stariy_prav_Tolstoy = prav_Tolstoy;
            }
                                                                        //dovedi do raboti

        if (ar[i] < prav_Tolstoy && ar[i] >= mid)
            {
            Alesha_paren.push_back(ar[i]);
            //a tyt pysirek mida - pr
            for (size_t j = 1; j <= xz; j++)
                {
                assert (0 < j && j < sz);
                assert (0 <= j-1 && j-1 < sz);
                if ( (&prav_Tolstoy)[j-1] > (&prav_Tolstoy)[j])
                    {
                    std::swap ((&prav_Tolstoy)[j-1], (&prav_Tolstoy)[j]);
                    }
                }
            }
        if (ar[i] > lev__Tolstoy && ar[i] <= mid)
            {
            Alesha_paren.push_back(ar[i]);
            //a tyt pysir lv - mida
            for (size_t j = 1; j <= xz; j++)
                {
                assert (0 < j && j < sz);
                assert (0 <= j-1 && j-1 < sz);
                if ( (&lev__Tolstoy)[j-1] > (&lev__Tolstoy)[j])
                    {
                    std::swap ((&lev__Tolstoy)[j-1], (&lev__Tolstoy)[j]);
                    }
                }
            }
        }
    }
//-----------------------------------------------------------------------------


iteratorr::iteratorr (int v, int n) :
    value (v),
    arnumber (n)
    {}


//-----------------------------------------------------------------------------

void iteratorr::operator = (iterator dad) :
    value(dad.value),
    arnumber(dad.arnumber)
    {}

 */


//-----------------------------------------------------------------------------
void sort_vstavkoy (int ar[], size_t sz)
    {

    assert (ar);
    if (sz <  2) return;
    if (ar[0] > ar[1]) std::swap (ar[0], ar[1]);
    if (sz == 2) return;

    for (int i = 2; i < sz; i++)
        {
        printf("\nfinding place for ar[%d]\n\n", i);
        int fafnir = find2 (ar, i, ar[i]);
        if (i != fafnir) Zdvig (&(ar[fafnir]), i - fafnir + 1);
        }


    }
//-----------------------------------------------------------------------------
int find2 (int ar[], size_t sz, int tofind)
    {
    $sg;

    Archy$ ( ar, sz);

    { $sd; printf ("finding place for %d, ", tofind); }

    int ledge = 0;
    int redge = sz;
    int CurrentCell = 1;
    for (; ledge < redge;)
        {
        CurrentCell = (ledge+redge)/2 ;

        Archy$ ( nullptr, sz, ledge, redge, CurrentCell);
        Archy$ ( ar, sz, ledge, redge, CurrentCell);

        assert (0 <= ledge && ledge <= CurrentCell && CurrentCell < redge && redge <= sz);

        printf ("search range [%d %d)\n;   current = %d; GOAL IS ", ledge, redge, CurrentCell);

        if (tofind == ar[CurrentCell]) { printf ("FOUND\n"); return CurrentCell; }
        if (tofind >  ar[CurrentCell]) { ledge = CurrentCell+1; printf("ON THE RIGHT, set left  edge = %d\n", ledge); }           //  0 1 2 3 4  5  6  7
        if (tofind <  ar[CurrentCell]) { redge = CurrentCell;   printf("ON THE LEFT,  set right edge = %d\n", redge); }           //  1 4 7 9 18 32 35 67
        }

    Archy$ ( nullptr, sz, ledge, redge, -1);
    Archy$ (ar, sz, ledge, redge, -1);
    printf ("final search range [%d %d)\n",ledge, redge);
    { $sd; printf ("NOT FOUND"); } printf ("         NEW PLACE = %d middle = %d", ledge, CurrentCell);
    //assert (ledge == redge);
    return ledge;
    }
//-----------------------------------------------------------------------------

int findTheRightPlaceForTheIntInArrayAndPlaceTheIntInThisPlace
    (int arn, int crnt, int ar[], size_t sz)
    {
    for (int i = 0; i <= arn; i++)
        {

        if (crnt <= ar[i])
            {
            printf("place is found i = %d\n", i);
            //printf ("Zdvig( &(ar[%d]) , %d);\n\n", i, arn - i+1);
            //Zdvig( &(ar[i]) , arn - i+1);
            return i;
            }
        printf("    place is being found i = %d\n\n", i);
        }
    return arn+1;
    }

//-----------------------------------------------------------------------------
void Zdvig (int ar [], size_t sz)
    {
    $sr;
    //Archy$ ( ar, sz);
    assert(ar);
    printf("");$n;
    int Andrusha_Pete4kin = ar[sz-1];
    for (int i = sz-2; i >= 0; i--)
        {
        assert(i >= 0);
        ar[i+1] = ar[i];
        }
    ar[0] = Andrusha_Pete4kin;

//$n;
    //Archy$ ( ar, sz);
    }

void QuiqSort (int ar [], size_t sz)
    {
    int left_wrong_n  = -666;
    int right_wrong_n = -666;
   // {$sprintf ("");
    for (;left_wrong_n = right_wrong_n - 1;)
        {
        int etalon = ar[sz/2];
        left_wrong_n  = -1;
        right_wrong_n = -1;
        for (int left = 0, right = sz-1;     left_wrong_n != -1, right_wrong_n != -1;   left++, right++)
            {
            if (left_wrong_n  == -1 ) if (! ar[left]  < etalon) left_wrong_n  = left;
            if (right_wrong_n == -1 ) if (! ar[right] > etalon) right_wrong_n = right;
            }
        std:swap (ar[left_wrong_n]; ar[right_wrong_n]);
        }



    }
/*  0 1 2 3  4  5 6 7  8  9  10 11 12 13
    1 3 4 76 5 99 0 15 72 44 32 21 10 16                                                    < > > < = > > > >
    l                                  r                                                      < < = > > > > > >
      l
        l
          L
                                    R
    1 3 4 10 5 99 0 15 72 44 32 21 76 16
             l
                L                r
                             r
                          r
                       r
                     R
    1 3 4 10 5 15 0 99 72 44 32 21 76 16
                L
                    r
                  R
    1 3 4 10 5 0 15 99 72 44 32 21 76 16

//-----------------------------------------------------------------------------

 0  1   2 3  4  5  6 7  8  9  10 11 12 13
 51 23 34 76 25 99 0 15 72 44 32 21 10 16
 L
                                        r
                                     R
10 23 34 76 25 99 0 15 72 44 32 21 51 16
    L
                                 r
                              r
                           r
                        r
                    R
10 15 34 76 25 99 0 23 72 44 32 21 51 16
   L
                    r
                  R
10 0 34 76 25 99 15 23 72 44 32 21 51 16
   l              R
      L
10 0 15 76 25 99 34 23 72 44 32 21 51 16
      L
                  r
               r
            r
         r


//-----------------------------------------------------------------------------
косяк
 51 23 34 76 25 99 0 15 72 44 32 21 10 16
 L                                      r
                                     R
 10 23 34 76 25 99 0 15 72 44 32 21 51 16
     L                              r
                                  r
                               r
                            r
                         r
                      r
                    R
10 0 34 76 25 99 23 15 72 44 32 21 51 16
      L



*/














