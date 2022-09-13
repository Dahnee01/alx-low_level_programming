#include <stdio.h>
#include "main.h"
#include "main.c"


void print_to_98(int n)
{
    int i = 0;
    if ( n >98 )
    {
        for ( int i = n; i >= 98; i--)
        {
            if (i !=n)
            {
                printf(", ");
            }
            printf("%d",i);
        }
        
    }
    else
    {
        for (int i = n; i <= 98; i++)
        {
          if (i !=n)
            {
                printf(", ");
            }
            printf("%d",i);
        }
        }

        _putchar('\n');
    
    
}