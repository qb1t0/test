#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	g_calc(int x, int y){return (x % y ? g_calc(y, x % y) : y);} 

int 		main(int ac, char **av)
{
  if (ac == 3 ? 1 : write(1, "[usage] : ./[name] [param 1] [param 2]\n", 39))
    (av[1] && av[2]) ? printf("answer is: %d\n", g_calc(atoi(av[1]), atoi(av[2]))) : 0;
}
