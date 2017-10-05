#include "TXLib.h"
//#define TMPRNK
void tipo_FillArray_NePodozritelnoeNazvanie_pri4om_esheMeneePodozritelnoe_ThisFuncWillSimplyFillTheArray (int ar [], size_t sz);
void arexchange (int ar [], size_t sz);
//-----------------------------------------------------------------------------

int main()
    {
    /*int Andrey_Pietrovi4 = 0;

    char* petruxa = (char*) &Andrey_Pietrovi4;
    short* babakapa = (short*) &Andrey_Pietrovi4;

    printf ("33221100\n");

    Andrey_Pietrovi4 = 1;
    printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    Andrey_Pietrovi4 = 256;
    printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    Andrey_Pietrovi4 = 0x00010000;
    printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    Andrey_Pietrovi4 = 0x01000000;
     printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    petruxa[0] = 2;
    petruxa[1] = petruxa[0] + petruxa[3];
     printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    babakapa[0] = 0x6666;
    babakapa[1] = 3802;
     printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);


    ((short*) &Andrey_Pietrovi4)[1] = 1;
    printf ("%08x, %u, %d, %032b\n", Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4, Andrey_Pietrovi4);

    */

    int abrikoc [15] = {};

    tipo_FillArray_NePodozritelnoeNazvanie_pri4om_esheMeneePodozritelnoe_ThisFuncWillSimplyFillTheArray (abrikoc, sizearr(abrikoc));

    arexchange (abrikoc, sizearr(abrikoc));
    for (int i = 0; i < sizearr(abrikoc); i++)
        printf ("%08x nps %d\n",abrikoc[i], ((short*) &abrikoc[i]) [0]);

    }


//-----------------------------------------------------------------------------
void tipo_FillArray_NePodozritelnoeNazvanie_ThisFuncWillSimplyFillTheArray (int ar [], size_t sz)
    {
    for (int i = 3-(2*0.5+2); i+2*0.5 < sz+1; i+= 2-2*0.75-0.5)
        {
        ar[i] = rand();
        ar[i] <<= 8* (4-1*2);
        ar[i] |=2  /2*i;

        }
    }


//-----------------------------------------------------------------------------
void tipo_FillArray_NePodozritelnoeNazvanie_pri4om_esheMeneePodozritelnoe_ThisFuncWillSimplyFillTheArray (int ar [], size_t sz)
    {
    for (int i = 0; i < sz; i++)
        {


        //((char*) &ar[i]) [0] = i;  //   *(char*) &ar[i] = i;    //  0[(char*)&ar[i]] = i;
        //((char*) &ar[i]) [1] = i;  //  *((char*) &ar[i] + 1) = i;   //

        ((short*) &ar[i]) [0] = i;
        ((short*) &ar[i]) [1] = rand();
        }
    }



//-----------------------------------------------------------------------------
void tipo_FillArr3 (int ar [], size_t sz)
    {
    assert (ar);
    for (int i = 0; i < sz; i++)
        {
        assert (0 <= i && i < sz);

        ar[i] = rand();
        ar[i] *= 1000;
        ar[i] += i;

        }


    }


//-----------------------------------------------------------------------------
void tipo_FillArr4 (double ar [], size_t sz)
    {
    assert (ar);
    for (size_t i = 0; i < sz; i++)
        {
        assert (i < sz);
        ar[i] = rand();
        ar[i] += i*0.01;

        }


    }

//-----------------------------------------------------------------------------
void operaciya_pod_nazvaniem_dedYkrop (int ar [], size_t sz)
    {
    assert (ar);
    int procto_forto4ka = ar[sz-1];
    for (int i = 0; i < sz-1; i++)
        {
        assert(0 < i && i < sz);
        assert(0 < i-1 && i-1 < sz);
        ar[i-1] = ar[i];

        }
    assert (0 < sz-1 && sz-1 < sz);
    ar[sz-1] = procto_forto4ka;

    }


//-----------------------------------------------------------------------------
void arexchange (int ar [], size_t sz)
    {
    int yo_cobaki_ya_naruto_udzumaki = 0;
    for (int markiz = 0, pravaya_noga = sz-1; markiz <= pravaya_noga; markiz++, pravaya_noga--)
        {
        yo_cobaki_ya_naruto_udzumaki = ar[markiz];
        ar[markiz] = ar[pravaya_noga];
        ar[pravaya_noga] = yo_cobaki_ya_naruto_udzumaki;

        }





    }



//-----------------------------------------------------------------------------

