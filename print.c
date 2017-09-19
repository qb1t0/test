#include <unistd.h>

int main(int ac, char **av)
{
  char	*s;
  int	i = 0;

  s = av[1];
  while (s[i])
    write(1, &s[i++], 1);
  return (write(1, "\n", 1));
}
