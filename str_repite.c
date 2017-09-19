#include <unistd.h>

int main(int ac, char **av)
{
  char	*s = av[1];
  
  return (printf("%s\n", s));
}
