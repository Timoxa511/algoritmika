
#include "TXLib.h"

void LoadLVL ();
void game();
int main()
    {
    try {game(); }
    catch (const char* errcode){printf("tipa oshipka: %s", errcode);}



    return 0;
    }
    void game()
    {
    try {LoadLVL(); }
    catch (const char* errcode){printf("game oshipka: %s", errcode); throw ("lalalalaalallaaay");}
    }


void LoadLVL ()
    {
    FILE* joj = fopen ("a.txt", "r");
    if (!joj) throw "nofile";
    }
