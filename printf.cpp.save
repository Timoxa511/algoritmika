
#include "TXLib.h"

//-----------------------------------------------------------------------------
void noperintf (const char* strc , ...) __attribute__((format (printf, 1, 2) ));

//-----------------------------------------------------------------------------

int main()
    {
    //noperintf ("%c", 'l' );
    //noperintf ("%d %c %d", 57, 'A',9);
    noperintf ("%s %c%s kushat xleb po %lg publey", " ytki", 'l', "ubyat", 4.99);

    }

//-----------------------------------------------------------------------------
void noperintf (const char* strc , ...)
    {
    assert (strc);

    va_list arg = NULL;
    va_start(arg, strc);

    for (; *strc != '\0';)
        {
        if (*strc == '%')
            {
            strc++;
            if (*strc == 'd')
                {
                strc++;
                printf ("%d", va_arg(arg, int));

                }
            else
            if (*strc == 'c')
                {
                strc++;
                printf ("%c", va_arg(arg, int));

                }
            else
            if (*strc == 's')
                {
                printf ("%s", va_arg(arg, char*));
                strc++;
                }
            else
            if (*strc == 'l' && *(strc+1) == 'g')
                {
                strc++;
                strc++;
                printf ("%lg", va_arg(arg, double));


                }
            else printf ("ERROR");
            }

        else
            printf ("%c", *strc++);
        }
    va_end(arg);

    }

//-----------------------------------------------------------------------------





















