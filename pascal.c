#include <stdio.h>
#define N 1000

int
main ()
{
  long c[N];
  long n, i, j;
  for (n = 1; n<=10; n++){
  for (i = 1; i <= n; i++)
    c[i] = 0;
  c[0] = 1;
  for (j = 1; j <= n; j++)
    for (i = j; i >= 1; i--)
      c[i] = c[i - 1] + c[i];
  for (i = 0; i <= n; i++)
    printf ("%ld ", c[i]);
  }
  return 0;
}
