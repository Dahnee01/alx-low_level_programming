#include "main.h"
#include "main.c"


int _islower(int c)
{
    char ch;
    int lower = 0;
    for(ch ='a'; ch < 'z'; ch++){
        if( ch == c){
            lower=1;
        }
    }
    return(lower);
}