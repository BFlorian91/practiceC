#include "ft_putchar.h"
#include "colle-00.h"

void    colle(int x, int y)
{
    topAndBottom(x, y);
    leftAndRight(x, y);
    if (y > 0)
        topAndBottom(x, y);

}

int    topAndBottom(int x, int y)
{
    if ((x <= 0 && y <= 0) || (x == 0))
        return (0);
    else
    {
        ft_putchar('o');
        x--;
    }
    while (x > 0)
    {
        if (x == 1 && y == 1)
            ft_putchar('o');
        else if (x > 1)
        {
            ft_putchar('-');
            
            if ((x - 1) == 1 )
                ft_putchar('o');
        }
        x--;
    }
    return (0);
}


int     leftAndRight(int x, int y)
{    
    int xMax;
    
    ft_putchar('\n');
   
    if (x > 1)
    {
        while (y)
        {   
            if (y > 2)
            {   
                xMax = x - 2;

                ft_putchar('|');
                while (xMax)
                {
                    ft_putchar(' ');
                    xMax--;
                }
                ft_putchar('|');
                ft_putchar('\n');
            }
            else
                return (0);
            y--;
        }
    }
    return (0);
}
