#include <math.h>
#include "discriminant.h"


float  sqrt(int a, int b, int c)
{	
float x1, x2;
 if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("x - any number");
                return -1;
            }
            else
            {
                printf("No roots");
                return -1;
            }
        }
        else
        {
            printf ("x = %g", -c/b);
            return -c/b;
        }
    }
    else
    {
        float d = dicsriminant(a,b,c);
        if(d < 0)
        {
            printf("No roots");
            return -1;
        }
        else
        {
            if(d == 0)
            {
                printf("x= %g", -b/(2*a));
                return -b/(2*a);
            }
            else
            {
                printf("x1= %g, x2= %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
                return (-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a);
            }
        }
    }
    }
}
