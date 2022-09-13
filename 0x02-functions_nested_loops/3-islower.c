#include "main.h"

/* 
prints out a to z 10 times 
*/
int _islower(int c)
{
char ch;
int lower = 0;
for(ch ='a'; ch < 'z'; ch++){
if(ch == c){
lower=1;
}
}
return(lower);
}
