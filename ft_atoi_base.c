#include <stdio.h>

static int isblank(int c)
{
  return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
	  || c == ' ');
}

static int ind(char c, const char *str)
{
  int i;

  i = 0;
  while (str[i] && str[i] != c)
    i++;
  return (i);
}

int ft_strlen(const char *s, int a)
{
  //if (!s[a])
    // return (a);
  //  return (ft_strlen(s, ++a));
  int i = 0;
 while (s[i])
   i++;
 return (i);
}

int ft_atoi_base(const char *nptr, const char *base)
{
  int result;
  int neg;
  int blen;

  result = 0;
  blen = ft_strlen(base, 0);
  if (blen < 2)
    return (0);
  while (isblank(*nptr))
    nptr++;
  neg = *nptr == '-';
  if (*nptr == '+' || *nptr == '-')
    nptr++;
  while (ind(*nptr, base) < blen)
    result = result * blen - ind(*nptr++, base);
  return (neg ? result : -result);
}

#include <stdio.h>
int main(int ac, char **av)
{
  printf("%d\n", ft_atoi_base(av[1], "2"));
  return 0;
}
