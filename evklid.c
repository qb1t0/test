#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
** Caclulatig:  recoursive calls while x mod y != 0
** if we have residue then y = x, && y = (x mod y)
*/
static int	g_calc(int x, int y){return (x % y ? g_calc(y, x % y) : y);} 


/*MAIN FUNCTION */
int 		main(int ac, char **av)
{
  //validation: there should be 2 numbers in input
  if (ac == 3 ? 1 : write(1, "[usage] : ./[name] [param 1] [param 2]\n", 39))
    (av[1] && av[2]) ? printf("answer is: %d\n", g_calc(atoi(av[1]), atoi(av[2]))) : 0; // if all ok call recurs func
}

/*
** EVKLID FOUNDS LOWEST PRIME EASY AS F*CK
*/
