#include <stdio.h>
#define USAGE "[usage]: ./a.out [string]"

//nice program
int main(int ac, char **av)
{
  char	*s = av[1];
  
  ac != 2 ? return(printf(USAGE)) : 0;			//argument number error
  !av[1] ? return(write(2, "INPUT ERORR\n", 12)) : 0	//NULL-string error
  return (printf("%s\n", s));
}
