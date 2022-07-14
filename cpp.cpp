#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int n, a, b;
  cout << "digite um numero para ver a sequencia de fibonacci ate ele: ";
  cin >> n;

  a = 1;
  b = 1;

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      cout << " " << a;
      a += b;
    }
    else
    {
      cout << " " << b;
      b += a;
    }
  }
  return 0;
}
