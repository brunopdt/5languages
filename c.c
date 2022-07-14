#include <stdio.h>

int main()
{
  int n, a, b;
  printf("digite um numero para ver a sequencia de fibonacci ate ele: ");
  scanf("%i", &n);

  a = 1;
  b = 1;

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      printf("%i ", a);
      a += b;
    }
    else
    {
      printf("%i ", b);
      b += a;
    }
  }
  return 0;
}
