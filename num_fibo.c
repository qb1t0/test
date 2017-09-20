////cr3at3d by qbstance, 2017 (c).
#include <printf.h>
#include <stdlib.h>
#include <unistd.h>

static unsigned long long int fibo(int x, int i)
{
  unsigned long long *buf;

  write(1, "hello\n", 5);
  if (x != 0 && (buf = (unsigned long long *)malloc(sizeof(unsigned long long) * x)))
    {buf[0] = 0; buf[1] = 1; while (++i <= x){buf[i] = buf[i - 1] + buf[i - 2];} return (buf[--i]);}
  return (0);
}

int main(int ac, char **av)
{
  ac == 2 && (av[1][0] >= '0' && av[1][0] <= '9') ?\
    printf("F(%s) : %llu\n", av[1], fibo(atoi(av[1]), 1)) : write(1, "[usage]: ./[name] [int param]\n", 30);
}
